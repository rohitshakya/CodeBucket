#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	int board[n][n];					//print board
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			board[i][j]=1;
		}
	}
	
	int r,c;
	cout<<"enter the position of queen"<<endl;
	cin>>r>>c;
	board[r][c]=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	int right,left,down,up,ru,lu,rd,ld;
	right=n-c;
	left=c-1;
	up=r-1;
	down=n-r;
	
	if(right<up)
	{
		ru=right;
	}
	else
	{
		ru=up;
	}
	if(left<up)
	{
		lu=left;
	}
	else
	{
		lu=up;
	}
	if(right<down)
	{
		rd=right;
	}
	else
	{
		rd=down;
	}
	if(left<down)
	{
		ld=left;
	}
	else
	{
		ld=down;
	}
	int count=(2*n)-2+(ru+lu+rd+ld);
	cout<<"no of squares attacked by queen are "<<count<<endl;
	
	
	
	cout<<"enter no of obstacles"<<endl;
	int k;
	cin>>k;
	
	int a[k],b[k];
	for(int i=0;i<k;i++)
	{
		cin>>a[i]>>b[i];
	}
	cout<<"obstacles"<<endl;
	for(int i=0;i<k;i++)
	{
		cout<<a[i]<<" "<<b[i]<<endl;
	}
	// coloumn row part
	
	//diagonal part
	int dr1[k],dc1[k],dr2[k],dc2[k],dr3[k],dc3[k],dr4[k],dc4[k];	
	int m1=0,m2=0,m3=0,m4=0;
	
	dr1[0]=0;
	dr2[0]=0;
	dr3[0]=0;
	dr4[0]=0;
	for(int i=0;i<k;i++)
	{
			if(abs(a[i]-r)==abs(b[i]-c))
	{
		
		if(a[i]<r&&b[i]<c)//lu
		{
		dr1[m1]=a[i];
		m1++;
		}
		else if(a[i]<r&&b[i]>c)//ru
		{
		dr2[m2]=a[i];
		m2++;
		}
		else if(a[i]>r&&b[i]<c)//ld
		{
		dr3[m3]=a[i];
		m3++;
		}
		else if(a[i]>r&&b[i]>c)//rd
		{
		dr4[m4]=a[i];
		m4++;
		}
		else
		{
			;
		}
	}
	}
	sort(dr1,dr1+m1);
	sort(dr2,dr2+m2);
	sort(dr3,dr3+m3);
	sort(dr4,dr4+m4);
	if(dr4[0]>0)
	{
		dr4[0]=n-dr4[0]+1;

	}
	if(dr3[0]>0)
	{
		dr3[0]=n-dr3[0]+1;

	}
	
	cout<<dr1[m1-1]<<endl;
	cout<<dr2[m2-1]<<endl;
	cout<<dr4[0]<<endl;
	cout<<dr3[0]<<endl;
	int count1=dr1[m1-1]+dr2[m2-1]+dr4[0]+dr3[0];
	count=count-count1;
	cout<<"the final count is "<<count<<endl;
	
	
}
