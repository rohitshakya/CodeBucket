#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n=5650;
	//fibbonacci numbers
	vector<long long int> f (n,1);
	
	for(int i=2;i<n;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	cout<<f[n-1]<<endl;
	cout<<sizeof(f);
}
