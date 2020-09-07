#include<iostream>
using namespace std;
class enemy
{
	public:
		virtual void attack()//=0;//pure virtual function; attack define in all sub class
		//virtual function late binding
		{
		cout<<"this is enemy attack"<<endl;
	}
};
class monster:public enemy
{
	public: 
	void attack()
	{
		cout<<"this is monster i will eat you"<<endl;
	}
};
class ninja:public enemy
{
	public: 
	void attack()
	{
		cout<<"this is ninja i will chop you"<<endl;
	}
};
class doraemon:public enemy
{
	public:
	void attack()
	{
		cout<<"im ur friend"<<endl;
	}
};
int main()
{
	
	ninja n;
	monster m;
	doraemon d;
		enemy *e1=&n;
		enemy *e2=&m;
		enemy *e3=&d;
		d.attack();
		e3->attack();

	e1->attack();//early binding without virtual keyword;
	e2->attack();
	
}
