/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title :  30 days of code/day 8 dictionary map
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string,int> m;
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        int t;
        cin>>s>>t;
        m[s]=t;
    } 
    string u;
    while(cin>>u)
    {
        map<string,int>::iterator it;
        it=m.find(u);
        if(it!=m.end())
        cout<<u<<"="<<m[u]<<endl;
        else
        cout<<"Not found"<<endl;
    }
    return 0;
}

