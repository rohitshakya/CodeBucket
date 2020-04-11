#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int solve(int n,int s[], int d, int m){
    int count=0;
	for(int i=0;i<n;i++)
    {
    	int sum=0;
    	for(int j=i;j<m+i;j++)
    	{
    		sum=sum+s[j];
    		
    	}
    	if(sum==d)
    	{
    		count++;
    	}
    }
    return count;
    // Complete this function
    
}

int main() {
    int n;
    cin >> n;
    int s[n];
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}

