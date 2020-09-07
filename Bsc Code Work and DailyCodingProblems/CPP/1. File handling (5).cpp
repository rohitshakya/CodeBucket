////////////////////////create text file/////////////////////
#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
		ofstream sf;
	sf.open("file1.DAT");
	if(!sf)
	{
		cerr<<"\aError opening gradefile\n";
		exit(100);
	}
	char ch;
	while(cin.get(ch))
	{
		sf.put(ch);
	}
	sf.close();
	cout<<"\nend of file creation"<<endl;


}
