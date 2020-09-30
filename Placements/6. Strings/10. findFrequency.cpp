#include<bits/stdc++.h>
using namespace std;

char * findFrequency(int input1[],int input2)
{
	int n=sizeof(input1)/sizeof(input1[0]);
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(input1[i]==input2) count++;
	}
	 string ch;
	if(count==0) ch =to_string(input2)+" not present"; 
	else ch=to_string(input2)+" comes "+to_string(count)+" times";
    char *cp=&ch[0];
	return cp;
}
int main()
{
	int arr[3]={1,2,3};
	cout<<findFrequency(arr,2);
}
