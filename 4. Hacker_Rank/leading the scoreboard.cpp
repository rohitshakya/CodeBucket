#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],c[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int r=1;
    c[0]=r;
    a[n+1]=0;
    for(int i=0;i<n+1;i++)
    {
        if(a[i]!=a[i+1])
        {    
            r=r+1;
            c[i+1]=r;

        }
        else
        c[i+1]=r;    
        
    }
    
  /*for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<c[i];
        cout<<endl;
    } */ 
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
    	cin>>b[i];
	}
	int i,j;
	for( i=0;i<m;i++)
	{
		
		for(j=0;j<n+1;j++)
		{
			if(b[i]>=a[j])
			{
				cout<<c[j]<<endl;
				j=n+1;
				
			}
		
		}
	}
   
    
    
}
