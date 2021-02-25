<?php
    //registration Module
public function getcities(){

    $sid = $this->request->getPost('sid');   

    $var =  "<option value=''>Select City</option>";    

    $cityData = $this->db->query("SELECT * FROM `cities` WHERE `state_id`=$sid")->getResultArray();  

    foreach($cityData as $cityId){               

        $catch = ($sid==$cityId['id'])? "selected":"";               

        $var.= "<option value='".$cityId['id']."' $catch > ".$cityId['city']." </option>";

    }

    echo $var;

}

public function Createaccount()
{        
    helper(['form','url']);
    $validation =  \Config\Services::validation();
    $check= $this->validate([
        'fullname' => [
            'rules' => 'required',
            'errors' => [
                'required' => ' The First name is required!'
            ]
        ],
        'lastname' => [
            'rules' => 'required',
            'errors' => [
                'required' => ' The Last name is required!'
            ]
        ],
        'contactnumber' => [
            'rules' => 'required|regex_match[/^[0-9]{10}$/]',
            'errors' => [
                'required' => 'Mobile number must be 10 digit.'
            ]
        ],
        'subjectlist' => [
            'rules' => 'required',
            'errors' => [
                'required' => 'Subject name is required'
            ]
        ],
        'classlist' => [
            'rules' => 'required',
            'errors' => [
                'required' => 'Class name is required'
            ]
        ],
        'school' => [
            'rules' => 'required',
            'errors' => [
                'required' => 'School name is required'
            ]
        ],
        'gender' => [
            'rules' => 'required',
            'errors' => [
                'required' => 'Gender is required.'
            ]
        ],
        'emailid' => [

            'rules' => 'required|valid_email|is_unique[vt_useraccount.vc_email]',
            'errors' => [
                'required' => 'email is required.'
            ]
        ],
        'city' => [
            'rules' => 'required',
            'errors' => [
                'required' => 'The city name is required.'
            ]
        ],       
        'state' => [
          'rules' => 'required',
          'errors' => [
            'required' => 'The state name is required.'
        ]
    ],
    'reusepassword' => [
        'rules' => 'required',
        'errors' => [
          'required' => 'Password not match.'
      ]
  ],
  'pass_confirm' => [
    'rules' => 'required|matches[reusepassword]',
    'errors' => [
      'required' => 'Password not match.'
  ]
],

]);



    if (!$check) {
        return redirect()->to(base_url() . '/registration')->withInput();

    }else{
        $numbr = 0000;
        $alpha = 'a';
        $getlastuser = $this->db->query('SELECT vc_username FROM vt_useraccount ORDER BY vc_id DESC LIMIT 1')->getRowArray();
        if (!empty($getlastuser)) {
            $snum = ltrim($getlastuser['vc_username'], $getlastuser['vc_username'][0]);
            if ($snum == 9999) {
                $alpha++;
                $snum = 0000;
            }
            $nDigit = str_pad($snum + 1, 4, 0, STR_PAD_LEFT);
        } else {
            $nDigit = str_pad($numbr + 1, 4, 0, STR_PAD_LEFT);
        }

        $userInfo = [
            'vc_name' => $this->request->getPost('fullname'),
            'vc_lastname' => $this->request->getPost('lastname'),
            'vc_username' => $alpha . $nDigit,
            'vc_contact' => $this->request->getPost('contactnumber'),
            'vc_gender' => $this->request->getPost('gender'),
            'vc_state' => $this->request->getPost('state'),
            'vc_city' => $this->request->getPost('city'),
            'vc_schooldetails' => $this->request->getPost('school'),
            'vc_email' => $this->request->getPost('emailid'),
            'vc_password' => md5($this->request->getPost('reusepassword')),
            'vc_viewpass' => encrypt_decrypt_pwd('encrypt', $this->request->getPost('reusepassword')),
            'vc_class' => $this->request->getPost('classlist'),
            'vc_subject' => $this->request->getPost('subjectlist'),
            'vc_status' => 'deactive',
            'vc_created_date' => date('Y-m-d H:i:s'),
        ];
        $storeUser = $this->getModel->datastorage('vt_useraccount', $userInfo);
        $userInfo['vc_id']= $this->db->insertID();
        if ($storeUser) {
//email function 
           $email = \Config\Services::email();  
           $config = array(
            'protocol'  =>'smtp',
            'SMTPHost' => SMTP_HOST,
            'SMTPPort' => SMTP_PORT,
            'SMTPUser' => SMTP_USER,
            'SMTPPass' => SMTP_PASSWORD,
            'SMTPTimeout'  => '30',
            'mailType'  => 'html',
            'charset'   => 'utf-8',
            'wordWrap'  =>  true
        );
           $msg= view('publicview/verify-email',$userInfo);
           $email->initialize($config);
           $email->setfrom('noreply@vivavolt.net', 'Viva Volt');
           $email->setto($userInfo['vc_email']);
           $email->setSubject('Registration Verification');
           $email->setMessage($msg);
           if($email->send()==false){
            echo $email->printDebugger();
        } else{
            session()->setFlashdata('msg','Thanks for the registration.Please Verify your email id.');
            return redirect()->to(base_url() . '/registration');
        }

    } else {
        echo "<p>Something went wrong. Try Again!</p>";
    }
}

}
public function registrationVerify(){

    $key = decrypt($this->request->getGet('key'));
    
    $getlastid = $this->db->query("SELECT vc_id FROM vt_useraccount Where vc_id=$key")->getRowArray();
    if($getlastid){
        $updatestatus = $this->db->query("UPDATE vt_useraccount SET vc_status='active' Where vc_id='".$key."' and (vc_created_date+interval 12 hour) >= now()");
        if($updatestatus){

            $email = \Config\Services::email();  

            $config = array(
                'protocol'  =>'smtp',
                'SMTPHost' => SMTP_HOST,
                'SMTPPort' => SMTP_PORT,
                'SMTPUser' => SMTP_USER,
                'SMTPPass' => SMTP_PASSWORD,
                'SMTPTimeout'  => '30',
                'mailType'  => 'html',
                'charset'   => 'utf-8',
                'wordWrap'  =>  true
            );
            $data['userdetails']=$this->db->query("SELECT * FROM vt_useraccount Where vc_id=$key")->getRowArray();
            $msg= view('publicview/thankyou-email',$data);
            $email->initialize($config);

            $email->setfrom('noreply@vivavolt.net', 'Viva Volt');
            $email->setto( $data['userdetails']['vc_email']);
            $email->setSubject('Registration Verification');
            $email->setMessage($msg);
            if($email->send()==false){
                echo $email->printDebugger();
            } else{
                $data['suctitle']='<span>Thanks For Confirmation</span>';
                $data['sucmss']='<span>Your email is successfully verified. You receive your username and password at your registered email address.</span>';
                echo view('publicview/registartionverify',$data);
            }

            
        }else{
            $data['Exptitle']='<span>Sorry For Confirmation</span>';
            $data['Expmss']='<span>Your Link is expired. Please register again.</span>';
            echo view('publicview/registartionvify',$data);
        }
        
    }else{
        $data['suctitle']='<span>Sorry For Confirmation</span>';
        $data['sucmss']='<span>Data not found.</span>';
        echo view('publicview/registationverify',$data);
    }
    
    
    
}
public function verifyCrmAccount()
{
    $ids = base64_decode($this->request->getGet('u'));
    $checkAccount = $this->getModel->singledata('vt_useraccount', ['vc_email' => $ids]);
    if ($checkAccount) {
        $this->db->where(['vc_email' => $ids]);
        $update = $this->db->update('vt_useraccount', ['vc_status' => 'Active']);
    }
    echo "<script>alert('Your account has been activated!'); window.location='" . base_url() . "'</script>";
}

//  forgate password 
public function Forgotpassword()
{
   echo view('publicview/forgot-password');
   
   
}
public function validateforgatepass(){
    helper(['form','url']);
    $validation =  \Config\Services::validation();

    $checkvalidation=$this->validate([

        'email' => [
            'rules' => 'required|valid_email',
            'errors' => [
                'required' => 'email is required.'
            ]
        ],
        'userid' => [
            'rules' => 'required',
            'errors' => [
                'required' => 'username is required.'
            ]
        ],
    ]);
    if (!$checkvalidation) {
        return redirect()->to(base_url() . '/forgot-password')->withInput();

    }else{
        $email = $this->getModel->singledata('vt_useraccount', ['vc_email' => $this->request->getPost('email')]);
        $userid = $this->getModel->singledata('vt_useraccount', ['vc_username' => $this->request->getPost('userid')]);
        if($userid){
            if ($email->vc_email== $userid->vc_email) {


                
                $data['userdetails'] = $userid;

                $msg= view('publicview/forgotpassword',$data);
                $email = \Config\Services::email();  

                $config = array(
                    'protocol'  =>'smtp',
                    'SMTPHost' => SMTP_HOST,
                    'SMTPPort' => SMTP_PORT,
                    'SMTPUser' => SMTP_USER,
                    'SMTPPass' => SMTP_PASSWORD,
                    'SMTPTimeout'  => '30',
                    'mailType'  => 'html',
                    'charset'   => 'utf-8',
                    'wordWrap'  =>  true
                ); 
                
                $email->initialize($config);

                $email->setfrom('noreply@vivavolt.net', 'Viva Volt');
                $email->setto( $userid->vc_email);
                $email->setSubject('Reset Password');
                $email->setMessage($msg);
                if($email->send()==false){
                    echo $email->printDebugger();
                } else{
                    session()->setFlashdata('msg',' We have mailed your password reset link on your registered  email addresss. Please reset your password.');
                    return redirect()->to(base_url() . '/forgot-password');
                }

            }else{
                session()->setFlashdata('msg',' Sorry! Your email address  is not found.');
                return redirect()->to(base_url() . '/forgot-password');
            }
        }else{
            session()->setFlashdata('msg',' Sorry! Your user id is not found.');
            return redirect()->to(base_url() . '/forgot-password');
        }


    }
}

public function getToken($length)
{
    $token = "";
    $codeAlphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    $codeAlphabet .= "abcdefghijklmnopqrstuvwxyz";
    $codeAlphabet .= "0123456789";
    $max = strlen($codeAlphabet);
    for ($i = 0; $i < $length; $i++) {
        $token .= $codeAlphabet[rand(0, $max - 1)];
    }
    return $token;
}

public function valid_password($password = '')
{
    $password = trim($password);
    $regex_lowercase = '/[a-z]/';
    $regex_uppercase = '/[A-Z]/';
    $regex_number = '/[0-9]/';
    $regex_special = '/[!@#$%^&*()\-_=+{};:,<.>§~]/';
    if (empty($password)) {
            #$this->form_validation->set_message('valid_password', 'The {field} field is required.');
        return true;
    }
    if (preg_match_all($regex_lowercase, $password) < 1) {
        $this->form_validation->set_message('valid_password', 'The {field} field must be at least one lowercase letter.');
        return false;
    }
    if (preg_match_all($regex_uppercase, $password) < 1) {
        $this->form_validation->set_message('valid_password', 'The {field} field must be at least one uppercase letter.');
        return false;
    }
    if (preg_match_all($regex_number, $password) < 1) {
        $this->form_validation->set_message('valid_password', 'The {field} field must have at least one number.');
        return false;
    }
    if (preg_match_all($regex_special, $password) < 1) {
        $this->form_validation->set_message('valid_password', 'The {field} field must have at least one special character.' . ' ' . htmlentities('!@#$%^&*()\-_=+{};:,<.>§~'));
        return false;
    }
    if (strlen($password) > 32) {
        $this->form_validation->set_message('valid_password', 'The {field} field cannot exceed 32 characters in length.');
        return false;
    }
    return true;
}


?>