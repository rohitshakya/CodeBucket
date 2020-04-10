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
	int right=n-c,left=c-1,down=n-r,up=r-1,ru,lu,rd,ld;
	
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
	
	int s=0,s1=0,s2=0,s3=0;
	int upmr[k],upmc[k],dwmr[k],dwmc[k],rimr[k],rimc[k],lemr[k],lemc[k];
	for(int i=0;i<k;i++)
	{
		if(a[i]==r&&b[i]<c)
		{
			
			lemr[s]=a[i];
			lemc[s]=b[i];
			s++;
		}
		if(a[i]==r&&b[i]>c)
		{
			rimr[s1]=a[i];
			rimc[s1]=b[i];
			s1++;
		}
		if(b[i]==c&&a[i]<r)
		{
			upmr[s2]=a[i];
			upmc[s2]=b[i];
			s2++;
		}
		if(b[i]==c&&a[i]>r)
		{
			dwmr[s3]=a[i];
			dwmc[s3]=b[i];
			s3++;
		}
				
	}
	sort(lemc,lemc+s);
	sort(rimc,rimc+s1);
	sort(upmr,upmr+s2);
	sort(dwmr,dwmr+s3);
	int d,u,l,ri;

	u=upmr[s2-1];
	l=lemc[s-1];	
		
	if(lemc[s-1]<0)
	{			
		lemc[s-1]=0;
	}
	
	if(upmr[s2-1]<0)
	{	
		upmr[s2-1]=0;
	}
	
	if(rimc[0]<0||rimc[0]>n)
	{	
		
		rimc[0]=0;
		
		
	}
	else
	{
		ri=n-rimc[0]+1;
	}
	if(dwmr[0]<0||dwmr[0]>n)
	{	
		
		dwmr[0]=0;
		d=0;
		
	}
	else
	{
		d=n-dwmr[0]+1;
	}
	
	count=count-l-ri-u-d;
	cout<<count<<endl;//count with row and column matched
	
	
	
	
}
