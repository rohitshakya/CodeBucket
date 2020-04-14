/* Missing number
	1 5 4 6 7 3
	missing number
	use bitwise xor operator
	0^x=x
	x^x'=1
	1^x=x' missing number	
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=7;
	int a[]={1,5,4,6,2,3};
	int v=0;
	for(int i=0;i<n-1;i++)
	{
		v=v^a[i];		
	}
	cout<<"missing number is "<<v;
	
}
