#include <bits/stdc++.h>

using namespace std;

int workbook(int n, int k,int arr[]) {
    int q[n],r[n];
    int pn=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        q[i]=arr[i]/k;
        r[i]=arr[i]%k;
        pn=pn+q[i];
        if(r[i]>0)
        {
        	pn++;
        }
    }
    
    int p=1;
    for(int i=0;i<n;i++)
    {
      for(int j=1;j<=arr[i];j++)
      {
      	if(j==p)
      	{
      		count++;
      	}
      	
      	if(j%k==0&&j!=arr[i])
      	{
      		p++;
      	}
      }
      p++;
      
    }
    
    
    cout<<"count of special case= "<<count<<endl;
    cout<<"total page"<<pn<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<q[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<r[i]<<" ";
    } 
    return count;
    // Complete this function
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = workbook(n, k, arr);
   // cout << result << endl;
    return 0;
}

