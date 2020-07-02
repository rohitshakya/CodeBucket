#include<iostream>
using namespace std;
class person
{
	string name,address;
	int salary,dob;
	public:
		void accept()
		{
			cout<<"enter name"<<endl;
			getline(cin,name);
			cout<<"enter address"<<endl;
			getline(cin,address);
			cout<<"enter date of birth"<<endl;
			cin>>dob;
			cout<<"enter salary or styphen"<<endl;
			cin>>salary;
		}
		void display()
		{
			cout<<"Name::\t"<<name<<endl;
			cout<<"salary::\t"<<salary<<endl;
			cout<<"Date of birth::\t"<<dob<<endl;
			cout<<"R/o::/t"<<address<<endl;
			
		}
		
};
class teacher:public person
{
	string dsn;
	public:
		void acc()
		{
			cout<<"teacher"<<endl;
			accept();
			cout<<"enter designation"<<endl;
			getline(cin,dsn);
		}
		void disp()
		{
			display();
			cout<<"Designation::\t"<<dsn;
		}
};
class student:public person
{
	string sd;
	public:
		void acc()
		{
			cout<<"Student"<<endl;
			accept();
			cout<<"enter standard"<<endl;
			getline(cin,sd);
		}
		void disp()
		{
			display();
			cout<<"Standard::\t"<<sd;
		}
};
int main()
{
	teacher sheetal;
	student rohit;
	sheetal.acc();
	sheetal.disp();
	rohit.acc();
	rohit.disp();
}
