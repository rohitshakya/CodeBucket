////////////////////////copy text file/////////////////////
#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
	ifstream ifs;//this is for readinf data
	ofstream ofs;//this is for write data
	ifs.open("file2.DAT");
	if(!ifs)
	{
		cerr<<"\aError opening gradefile\n";
		exit(100);
	}
	ofs.open("file1.DAT");
		if(!ofs)
	{
		cerr<<"\aError opening gradefile\n";
		exit(102);
	}

	char ch;
	int countc=0,countl=0,prech,countw=0;
	while(ifs.get(ch))
	{
		ofs.put(ch);
		countc++;
		if(ch=='\n')
		countl++;
		if(ch==' ')
		countw++;
		prech=countc;
			}
	ifs.close();
	ifs.close();
	cout<<"no of character"<<countc-1<<endl;
	cout<<"no of lines"<<countl-1;
	cout<<"no of words"<<countw+1;
	cout<<"\nend of file copying"<<endl;


}
