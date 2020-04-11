#include <bits/stdc++.h>
#include<iostream>
using namespace std;

string gameOfStones(int n,int l) {
	
         if(l%2!=0&&(n==2||n==3||n==5))
		{
			cout<<"First"<<endl;
		}
		else if(l%2!=0&&(n!=2&&n!=3&&n!=5))
		{
			cout<<"Second"<<endl;
		}
        else if(l%2==0&&(n==2||n==3||n==5))
    {
        cout<<"First"<<endl;
    
    }
    else if(l%2==0&&(n!=2&&n!=3&&n!=5)) 
       cout<<"First"<<endl;
    else
    {
        cout<<"Second"<<endl;
    }
	return "rohit";
    // Complete this function
}

int main() {
    int t;
    cin >> t;
    int a[t];
    for(int i=0; i<t; i++){
        
        cin>>a[i];
    }
    int l=1;
    for(int i=0;i<t;i++)
    {
    
    string result = gameOfStones(a[i],l++);
        //cout << result << endl;	
    }
    return 0;
}

