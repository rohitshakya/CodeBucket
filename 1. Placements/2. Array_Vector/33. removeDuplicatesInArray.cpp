/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : 
 * Title : remove duplicates from sorted array
 */
#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,2,2,4,4,5,6,7,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	int j = 0; 
    for (int i=0; i < n-1; i++) 
        {
        	if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i];	
		} 
    arr[j++] = arr[n-1];
	for(int i=0;i<j;i++)
	cout<<arr[i];
}
