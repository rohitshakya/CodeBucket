/*
* Author : Rohit Shakya
* Date   : July-2020
* Compiler : g++ 4.9.2
* Flags    : -std=c++14
* Time complexity : 
* Title : chess board 
*/
#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
return a>b?a:b;
}


int solution(vector< vector<int>> &A) {
	int row=A.size();
	int col=A[0].size();
	long long max=0;	
	int i,j;
	for(i=0;i<row;i++)
	{
		int k=0;
		int ele1=A[i][k];
		for(j=i+1;j<col;j++)
		{
			int ele2=A[i+1][j];
			if(j==k)
			{
				max=0;
			}
			long long sum=ele1+ele2;
			if(sum>max)
			{
				max=sum;
			}
		}
	}
	
	return max;

}
int main()
{
vector<vector<int>> v;
for(int i=0; i<2; i++){ 
vector<int> row;
for(int j=0; j<2; j++){
	int temp;
  cin>>temp;
  row.push_back(temp);// I don't know how to push_back here!!
}
v.push_back(row);
}
int z=solution(v);
cout<<z;
}
