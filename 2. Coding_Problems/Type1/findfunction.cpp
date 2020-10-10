#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
void reverseStr(string &str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i=0; i<n/2; i++)
       swap(str[i], str[n-i-1]);
}
string acidNaming(string str) {
    	int a=-1,b=-1;
    	int n=str.length();
		std::string str2="hydro";
        
		std::size_t found = str.find(str2);
        if (found!=std::string::npos)
        {
            a=found;
        }
        reverseStr(str);
		 b=str.find("ci");
 		 if (found!=std::string::npos)
   			 std::cout <<"";
    	if(a==0&&b==0)
    	{
    		cout<<"non-metal acid"<<endl;
    	}
    		else if(b==0)
    	{
    		cout<<"polyatomic acid"<<endl;
    	}
    	else
    	{
    		cout<<"not an acid"<<endl;
    	}
    	return "";
}

int main() {
    int n;
    cin >> n;
     string acid_name[n];
    for(int a0 = 0; a0 < n; a0++){
       
        cin >> acid_name[a0];
        
    }
    for(int a0 = 0; a0 < n; a0++){
       
        acidNaming(acid_name[a0]);
        
    }
    return 0;
}

