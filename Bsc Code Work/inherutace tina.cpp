#include<iostream>
using namespace std;
class mother//base class
{
	public:
		void display()
			{
			cout<<"im mother"<<endl;
		}

};
class father//base class
{
	public:
		void display()
		{
			cout<<"im father"<<endl;
		}
		
};
class daughter:public mother,public father//sub class of mother AND father
{
	public:
	void display()
			{
			cout<<"im daughter"<<endl;
		}
		
};
int main()
{
	daughter *tina;
	tina->mother::display();
	tina->father::display();
	
}
