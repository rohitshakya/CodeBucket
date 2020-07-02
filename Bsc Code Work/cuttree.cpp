#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int min(int a[],int n)
{
	int m=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			m=a[i];
			break;
		}
		
	}
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<=m&&a[i]>0)
        {
            m=a[i];
        }
    }
    return m;
}
vector <int> cutTheSticks(vector <int> arr,int n) {
    // Complete this function
   int m;
   m=min(arr,n);
   do{
   	for(int i=0;i<n;i++)
   	{
   		if(a[i!=0])
   		{
   			a[i]=a[i]-m;
   		}
   	}
   	for(int i=0;i<n;i++)
   	{
   		if(a[i]>0])
   		{
   			count++;
   		}
   	}
   	cout<<count<<" ";
   }while(m!=-1)
    return 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = cutTheSticks(arr,n);
    for (ssize_t i = 0; i < result.size(); i++) {
        //cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    //cout << endl;


    return 0;
}

