#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    int b[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            b[i][j]=0;
        }
    }

    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            if((a[i][j]>a[i-1][j])&&(a[i][j]>a[i+1][j])&&(a[i][j]>a[i][j-1])&&(a[i][j]>a[i][j+1]))
            {
                b[i][j]=1;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {    
        for(int j=0;j<n;j++)
        {
            
            cout<<b[i][j];
            cout<<endl;
        }
    
    }
    
}
