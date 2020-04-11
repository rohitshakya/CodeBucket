#include<iostream>
#include<iomanip>
using namespace std;
void part1();
void target();
void target2();
void amu();
void sht();
int main()
{
	part1();

}
void part1()
{
	int c;
	cout<<setw(57)<<"GAME STATION"<<endl;
	cout<<setw(120)<<setfill('*')<<"";
	cout<<"choose your game"<<endl;
	cout<<"1.Shooting"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:
		{
		cout<<"you choose shooting"<<endl;
		sht();
		}
		break;
		default:
		cout<<"invalid choice"<<endl;
		break;
	}
	

}
void target()
{
	
	int i,j,k,n;
	cout<<"enter no of rows for target"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+80;j++)
		{
			cout<<" ";
		}
		int l=i;
		for(j=1;j<=i;j++)
		{
			
			cout<<l;
			l++;
		}
		k=2*(i-1);
		for(j=2;j<=i;j++)
		{
	      	cout<<k;
	      	k--;
		}
		cout<<endl;
		
	}

}
void amu()
{
	int n;
	cout<<"choose your amunation power"<<endl;
	cout<<"1"<<endl;
	cout<<"2"<<endl;
	cout<<"3"<<endl;
	cout<<"4"<<endl;
	cin>>n;
	switch(n)
	{
		case 1:cout<<"your power is 1"<<endl;
		break;
	    case 2:cout<<"your power is 2"<<endl;
		break;
		case 3:cout<<"your power is 3"<<endl;
		break;
		case 4:cout<<"your power is 4"<<endl;
		break;
		default:cout<<"your power is 1"<<endl;
		
		break;
}
}
void sht()
{
	target();
	target2();
	amu();
	
}
void target2()
{
	int i,n=20,j;
	for(i=1;i<=n-10;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n-10)
			cout<<"#";
			else if (j==1||j==n)
			cout<<"#";
			else
			cout<<" ";
		}
		cout<<endl;
	}
}


