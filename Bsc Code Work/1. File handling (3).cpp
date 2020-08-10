#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	cout<<"check status for file open or close"<<endl;
	ifstream f;
	f.open("file1.dat");
	if(!f)
	{
		cerr<<"\aError 100 opening file1.dat\n"<<endl;
		exit(100);
		
	}//if open
	f.close();
	if(f.fail())
	{
		cout<<"\aERROR IN CLOSING FILE"<<endl;
	}//IF CLOSE
	cout<<"end open close test"<<endl;
	
	
}
