#include<iostream>
#include<iomanip>
using namespace std;
void add(int r,int c);
void sub(int r,int c);
//void mul();
//void tra();
int c,r,matrix1[5][5],matrix2[5][5],ch,sum[5][5],dif[5][5];
int main()
{
	
	cout<<"enter no of row and coloumn of matrix"<<endl;
	cin>>r>>c;
	cout<<"enter matrix 1"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>matrix1[i][j];
		}
	}
	cout<<"first matrix is::"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<matrix1[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"enter matrix 2"<<endl;
		for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>matrix2[i][j];
		}
	}
	cout<<"first matrix is::"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<matrix2[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<setw(20)<<"MENU"<<endl;
	cout<<"1.Sum "<<endl;
	cout<<"2.Difference"<<endl;
	cout<<"3.Product"<<endl;
	cout<<"4.Transpose of matrix"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:add(r,c);
		break;
		case 2:sub(r,c);
		break;
//		case 3:mul();
//		break;
//		case 4:tra();
//		break;
		default:cout<<"choose a valid option"<<endl;
		break;
	}
	
}
void add(int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			sum[i][j]=matrix1[i][j]+matrix2[i][j];
		}
		cout<<endl;
	}
		for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<sum[i][j]<<"\t";
		}
		cout<<endl;
	}

	
}
void sub(int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			dif[i][j]=matrix1[i][j]-matrix2[i][j];
		}
		cout<<endl;
	}
		for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<dif[i][j]<<"\t";
		}
		cout<<endl;
	}
}
