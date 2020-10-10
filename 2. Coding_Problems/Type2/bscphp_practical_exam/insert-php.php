<!--
 * Author : Rohit Shakya
 * Date   : May-2020
 * Editor : Sublime text
 * Local server: Xampp
 * title : Insert into database 
 -->
<?php
$servername = "localhost";
$dbusername = "root";
$password = "";
$database="myDB"
$name=$_POST['name'];
$rollno=$_POST['roll'];
$email=$_POST['email'];
$mobile=$_POST['mobile'];
$school=$_POST['school'];


// Create connection
$conn = new mysqli($servername, $dbusername, $password,$database);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 


$sql = "INSERT INTO MyDetails (name, rollno, email,mobile,school)
VALUES ('$name', '$rollno', '$email', 'mobile', '$school')";
if ($conn->query($sql) === TRUE) {
  echo "New record created successfully<br>";
} else {
  echo "Error: " . $sql . "<br>" . $conn->error;
}
	
$conn->close();
?>
		