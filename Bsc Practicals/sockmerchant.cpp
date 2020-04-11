#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n,int a[]) {
    int count=0,c2=0;
    int var=1000;
    for(int i=0;i<n;i++)
    {
    	for(int j=i+1;j<n;j++)
    	{
    		
    		if(a[i]==a[j])
    		{
    			
    			count++;
    			a[j]=a[j]-(var--);
    			
    		}
    		count=count+1;
    	}
    }
    return count;
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    int ar[n];
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}

