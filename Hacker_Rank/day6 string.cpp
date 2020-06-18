#include <cmath>
/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title :  30 days of code/day 6 string
 */
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--)
    {

    
    string s;
    cin>>s;
    string s1="",s2="";
    for(int i=0;i<s.length();i++)
    {
        if(i&1) s1=s1+s[i];
        else s2=s2+s[i];
    }  
    cout<<s2<<" "<<s1<<endl;
    }
    return 0;
}
