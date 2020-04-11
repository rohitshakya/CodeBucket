#include<iostream>
using namespace std;
int main()
{
	//demonstration left right justification
	cout<<"default justification:|";
	cout.width(10);
	cout<<12345<<"|\n";
	cout.setf(ios::left,ios::adjustfield);
	cout<<"left justification   :|";
	cout.width(10);
	cout<<12345<<"|\n";
	cout.setf(ios::right,ios::adjustfield);
	cout<<"right justification  :|";
	cout.width(10);
	cout<<12345<<"|\n";
	//demonstration numeric values
	cout<<"\nNumber with showbase and uppercase off"<<endl;
	cout.setf(ios::hex,ios::basefield);
	cout<<10000<<endl;
	cout.setf(ios::dec ,ios::basefield);
	cout<<15<<endl;
	cout.setf(ios::oct,ios::basefield);
	cout<<15<<endl;
	cout.setf(ios::hex,ios::basefield);
	cout<<15<<endl;
	//demonstration scientific value
	cout.setf(ios::scientific,ios::floatfield);
	cout<<3123.999<<endl;
	cout.setf(ios::fixed,ios::floatfield);//show number upto six decimal place
	cout<<3123.1<<endl;
	cout.setf(ios::uppercase);//does not work
	
	cout<<'r'<<endl;

	
	
	
	
	
}
