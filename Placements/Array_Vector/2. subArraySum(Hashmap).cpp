/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Space : O(n)
 * Title : subarray sum to a given sum
 * Note: valid for negative numbers
 */
 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,2,5,7,12,56,34};
	int given;
	cout<<"enter given number"<<endl;
	cin>>given;
	int init=0, sum=0;
	int flag=0;
	map<int,int> m;
	for(int i=0;i<7;i++)
	{
		sum+=arr[i];
		if (m.find(sum-given) != m.end()) 
        { 
            cout << "Sum found between indexes "<< m[sum] + 1 << " to " << i << endl; 
            flag=1;
            break;
        } 
        m[sum] = i;  
	}
	if(!flag) cout<<"Not Found\n";
}
