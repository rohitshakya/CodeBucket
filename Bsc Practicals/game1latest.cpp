#include<iostream>
#include<iomanip>
using namespace std;
class game
{
	public:
	void code0()
{
	int c;
	cout<<setw(57)<<"GAME STATION"<<endl;
	cout<<setw(120)<<setfill('*')<<"";
	cout<<"choose your game"<<endl;
	cout<<"1.Shooting"<<endl;
	cout<<"2.Archery"<<endl;
	cout<<"3.Mario"<<endl;
	cout<<"4.Racing"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:
		cout<<"1";
		break;
		case 2:cout<<"2";
		break;
		case 3:cout<<"3";
		break;
		case 4:cout<<"4";
		break;
		default:cout<<"invalid choice"<<endl;
		break;
	}
	
}
	
	void shooting()
{
	system("cls");
	code1();
	cout<<setw(55)<<setfill(' ')<<"SHOOTING"<<endl;
	scode1();
	
}
};
int main()
{
	game g;
	g.code0();
	g,shooting();
}

