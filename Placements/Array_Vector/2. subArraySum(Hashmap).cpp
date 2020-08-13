#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,2,5,7,12,56,34};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum;
	cout<<"enter sum"<<endl;
	cin>>sum;
	int curr_sum=0;
	map<int,int> m;
	for(int i=0;i<n;i++)
	{
		curr_sum+=arr[i];
		if(sum==curr_sum)
		{
			cout<<"found at 0 to "<<i<<endl;
			return 0;
		}
		if(m.find(curr_sum-sum)!=m.end())
		{
			cout<<"found at "<<m[curr_sum - sum] + 1 << " to " << i << endl;
			return 0;
		}	
		m[curr_sum]=i;
	}
    cout << "No subarray with given sum exists"<<endl;
}
