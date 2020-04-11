#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int migratoryBirds(int n,int ar[]) {
    // Complete this function
    int a=0,b=0,c=0,d=0,e=0;
    for(int i=0;i<n;i++)
    {
    	if(ar[i]==1)
    	{
    		a++;
    		
    	}
    	else if(ar[i]==2)
    	{
    		b++;
    	    	}else if(ar[i]==3)
    	{
    		c++;
    		
    	}else if(ar[i]==4)
    	{
    		d++;
    
    	}
    	else e++;
    }
    int f;
			if(a>=b&&a>=c&&a>=d&&a>=e)
			{
				f=1;
				
			}
			else if(b>=a&&b>=c&&b>=d&&b>=e)
			{
				f=2;
				
			}else
			if(c>=a&&c>=b&&c>=d&&c>=e)
			{
				f=3;	
				
			}else if(d>=a&&d>=b&&d>=c&&d>=e)
			{
				f=4;	
			
			}
			else
	           f=5;
				
			   
    return f;
}

int main() {
    int n;
    cin >> n;
    int ar[n];
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}

