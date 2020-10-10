#include<bits/stdc++.h> 
/* it includes all the header file at the same time, 
doesn't affect the time complexity of the algorihtm but increases the file size. 
for coding practice its better to use it and for deployment of the project, include each header file individually */
using namespace std;
	void display(set<int> s)
{
		set <int> :: iterator i= s.begin();
	while(i!=s.end())
	{
		cout<<" "<<*i<<endl;
		i++;
	}
}

int main(){
	set<int> s1{1,2,3,4,1};
	cout<<"printing elements of set 1"<<endl;
	display(s1);
/* 
set <int> :: iterator i= s1.begin();
	while(i!=s1.end()){
		cout<<" "<<*i<<endl;
		i++;
	}
*/
     set<int> s2{5,8,3,2}; //sort descen is used for sort elements in descending order
     cout<<"printing elements of set 2"<<endl;
	 set <int> :: iterator i2= s2.begin();
	while(i2!=s2.end()){
			cout<<" "<<*i2<<endl;
	i2++;
	}
	
	set<int> s3(s1.begin(),s1.end());
	cout<<"elements in set 3"<<endl;
	display(s3);
	
	s1.insert(0);
	display(s1);
	cout<<"number of elements is = "<<s1.count(2)<<endl;
    
	auto i3 = s1.find(7);
	if(i3!= s1.end())
		cout<<"element "<<*i3<<" found"<<endl;
	else
	cout<<"element not found"<<endl;
	
	//erasing element
		
	cout<<"enter element you want to erase"<<endl;
	int input=0;
	cin>>input;
	 
	 cout<<"erasing "<<s1.count(1)<<" instance of value "<<input<<endl;
	 s1.erase(input);
	cout<<"s1 set after deleting "<<input<<endl;
	 display(s1);
	
	
}


