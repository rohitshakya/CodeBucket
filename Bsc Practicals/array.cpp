#include <bits/stdc++.h>
#include<iostream>
using namespace std;

long largestValue(int A[],int n) {
	long sum2=0;
	for(int i=0;i<n-1;i++)
	{
	long sum1=0;
	for(int j=i+1;j<n;j++)
	{
		sum1=sum1+A[j];
	}
	sum1=A[i]*sum1;
	sum2=sum2+sum1;
}
cout<<sum2<<" ";
return sum2;
	
	
    // Return the largest value of any of A's nonempty subarrays.
}

int main() {
    int n;
    cin >> n;
    int A[n];
    for(int A_i = 0; A_i < n; A_i++){
       cin >> A[A_i];
    }
    long result = largestValue(A,n);
   cout << result << endl;
    return 0;
}

