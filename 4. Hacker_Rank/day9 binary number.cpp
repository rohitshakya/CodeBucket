/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(logn)
 * Title :  30 days of code/ day 9 binary number
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int max=0;
    int count=0;
    while(n)
    {
        
        if(n&1) count++;
        else count=0;
        if(count>max) max=count;
        n>>=1;
    }
    cout<<max<<endl;
    return 0;
}
