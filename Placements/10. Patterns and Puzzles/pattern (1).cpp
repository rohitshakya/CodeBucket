#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=1,temp; 
	cout<<"enter the size of the pattern\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		if(i%2==1)
		{
			for(int j=0;j<=i;j++)
			{
				cout<<count;
				count++;
			}	
		}
		else
		{
			count=count+i;
			temp=count;
			for(int j=0;j<=i;j++)
			{
				cout<<count;
				count--;
			}
			count=temp+1;
		}
		cout<<endl;
	}
}
/* 
 1
 2 3
 6 5 4
 7 8 9 10
 15 14 13 12 11
 Do increment count after every print, for even rows print directly and for odd rows increment count as maximum and decrement it.
 and reasign count=count temp for next row;
 */

