#include<iostream>
#include<iomanip>
using namespace std;
void code0();
void code1();
void shooting();
void scode1();
void ar1();
void ar2();
void ar3();
void ar4();
void ar5();
void target();
void archery();
void mario();
void racing();
void up();
void down();
void shoot();

int main()
{
	code0();
}
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
		case 1:shooting();
		break;
		case 2:archery();
		break;
		case 3:mario();
		break;
		case 4:racing();
		break;
		default:cout<<"invalid choice"<<endl;
		break;
	}
	
}
void code1()
{
	
	cout<<setw(58)<<setfill(' ')<<"GAME START GUYS"<<endl;
	cout<<setw(120)<<setfill('*')<<"";
}
void shooting()
{
	system("cls");
	code1();
	cout<<setw(55)<<setfill(' ')<<"SHOOTING"<<endl;
	scode1();
	
}
void racing()
{
	system("cls");
	code1();
	cout<<"racing"<<endl;
}
void archery()
{
	system("cls");
	code1();
	cout<<"archery"<<endl;
}
void mario()
{
	system("cls");
	code1();
	cout<<"mario"<<endl;
}
void scode1()
{
	int c2;
	cout<<"initializing"<<endl;
	ar1();
	cout<<"press 1 for up 2 for down";
	cin>>c2;
	switch(c2)
	{
		
		case 1:up();
		break;
		case 2:down();
		break;
		case 3:shoot();
		break;
		default:cout<<"invalid choice"<<endl;
		break;
	}
		
	}

void ar1()
{
	cout<<"==>"<<setw(57)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
}
void ar2()
{
	cout<<setw(60)<<"#####"<<endl;
	cout<<"==>"<<setw(57)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
}
void ar3()
{
	cout<<setw(60)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
	cout<<"==>"<<setw(57)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
}
void ar4()
{
	
	cout<<setw(60)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
	cout<<"==>"<<setw(57)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
}
void ar5()
{
	cout<<setw(60)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
	cout<<setw(60)<<"#####"<<endl;
	cout<<"==>"<<setw(57)<<"#####"<<endl;
}
void up()
{
	cout<<"working"<<endl;
}
void down()
{
	cout<<"working down"<<endl;
}
void shoot()
{
	cout<<"working shoot"<<endl;
}
