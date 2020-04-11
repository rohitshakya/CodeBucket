#include <bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;

int pickingNumbers(int a[],int n) {
    int c[n],l=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        	int temp;
        	if(a[i]>a[j])
        	{
        		temp=a[i];
        		a[i]=a[j];
        		a[j]=a[i];
        	}
        }
    }
    for(int i=0;i<l+1;i++)
    {
    	cout<<c[i]<<" ";
    }
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = pickingNumbers(a,n);
    //cout << result << endl;
    return 0;
}

