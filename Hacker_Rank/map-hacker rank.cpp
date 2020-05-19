/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Title :  Map/hackerrank
 */
#include <cmath>
#include <cstdio>
#include <utility>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;
int main() {
    int q;
    cin>>q;
    map<string,int> m;
    for(int i=0;i<q;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            string s;
            int v;
            cin>>s;
            cin>>v;
            m[s]=m[s]+v;
        }
        if(a==2)
        {
            string s;
            cin>>s;
            m.erase(s);
        }
        if(a==3)
        {
            string s;
            cin>>s;
            cout<<m[s]<<endl;
        }
    }  
    return 0;
}

