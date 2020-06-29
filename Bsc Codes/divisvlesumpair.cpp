#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int divisibleSumPairs(int n, int k,int ar[]) 
{
    // Complete this function
    int count=0;
	for(int i=0;i<n;i++)
    {
    	int sum=0;
    	for(int j=i+1;j<n;j++)
    	{
    		sum=ar[i]+ar[j];
    		
    	if(sum%k==0)
    		{
    		count++;
    		}
    	}
	}
    return count;
}

int main() 
{
    int n;
    int k;
    cin >> n >> k;
    int ar[n];
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = divisibleSumPairs(n, k, ar);
    cout << result << endl;
    return 0;
}

