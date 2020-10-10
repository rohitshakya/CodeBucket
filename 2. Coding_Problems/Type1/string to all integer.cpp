#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;
int main()
{
	int found,i;
	stringstream ss;
	string s,temp;
	cout<<"enter a string"<<endl;
	cin>>s;
	
	ss<<s;
	int a[3];
	while (!ss.eof()) {
 
        /* extracting word by word from stream */
        ss >> temp;
 
        /* Checking the given word is integer or not */
        if (stringstream(temp) >> found)
            {
            	a[i]=found;
            	cout << found << " ";
            	i++;
            }
 
        /* To save from space at the end of string */
        temp = "";
    }
    

}
