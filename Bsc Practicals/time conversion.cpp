#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

string timeConversion(string s) {
    // Complete this function
    int intv,strv;
	string p;
    std::istringstream ss(s);
    ss>>intv;
    cout<<intv;
	int l=s.length();    //l+1 is length of character array by which we will find am or pm of string     
    
    char arr[l+1];
    strcpy(arr,s.c_str());
    
    if(arr[8]=='p'||'P')
    {
    	 intv=intv+12;
    }
    //arr[3]+arr[4]+":"+arr[5]+arr[6];
    cout<<intv;
	return s;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}

