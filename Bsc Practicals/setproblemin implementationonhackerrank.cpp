#include <bits/stdc++.h>
#include<iostream>
#include <cmath>
int lcm(int a,int b);
using namespace std;

int getTotalX(int a[],int b[],int n,int m) {
    // Complete this function
    int x=1,flag=0,flag2=0,count=0;
    for(int i=0;i<n;i++)
    {
    	
    	x=lcm(x,a[i]);	
    }
    //cout<<x;
    for(int i=0;i<m;i++)
    {
    	if(b[i]%x==0)
    	{
    		flag=1;
    	}
    	else
    	{
    	flag=0;
    	}
    
    
    }
    if(flag==1)
    {
    //count++;
    //cout<<x<<"is a element of a and b"<<endl;
    for(int i=1;i<m;i++)
    {
    	x=x*i;
    	if(b[i-1]%x==0)
    	{
    		flag2=1;
    	}
    	else
    	{
    	flag2=0;
    	break;
    	}
    if(flag2==1)
    {
    	count++;
    }

    	
    }
    cout<<"count"<<count<<endl;
}
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    int a[n];
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int b[m];
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b,n,m);
    //cout << total << endl;
    return 0;
}
 int  lcm(int a,int b)
{
    int m,n;

    m=a;
    n=b;

    while(m!=n)
    {
	if(m < n)
	{
	m=m+a;
	}
	else
	{
	    n=n+b;
	    }
    }

    return m;
}
