/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title : Palindrome
 */
#include<bits/stdc++.h>
using namespace std;
bool check(string str)
{
    stack<char> s;
    int i=0;
    int j=str.length()-1;
    while(str[i]!='X')
    {
        s.push(str[i]);
        i++;
    }
    i++;    
    while(!s.empty())
    {
        if(s.top()==str[i])
        {
            i++;
            s.pop();
        }
        else
        return false;
    }
    return true;
}
int main()
{
    string str="aabcXcbaa";
    cout<< "string is \n"<<str;;
    bool out=check(str);
    cout<<" ans is ="<<out;
    return 0;
}


