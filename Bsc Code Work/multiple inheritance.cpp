#include<iostream>
using namespace std;
class mother//base class
{
	public:
		void display()
			{
			cout<<"im mother"<<endl;
		}
		int mpv;
};
class father//base class
{
	public:
		void display()
		{
			cout<<"im father"<<endl;
		}
		int fpv;
};
class daughter:public mother,public father//sub class of mother AND father
{
	public:
	void display()
			{
			cout<<"im daughter"<<endl;
		}
		int dpv;
};
int main()
{
	daughter tina;
	tina.mpv=1;
	tina.fpv=2;
	cout<<tina.mpv<<endl<<tina.fpv<<endl;
	tina.mother::display();
	tina.father::display();
	
}
