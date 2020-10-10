#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,r,c,right,left,down,up,ru,lu,rd,ld,count;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	cout<<"enter no of obstacles"<<endl;
	cin>>k;
	int board[n][n];					//print board
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			board[i][j]=1;
		}
	}
	
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
	
	count=(2*n)-2+(ru+lu+rd+ld);
	cout<<"no of squares attacked by queen are "<<count<<endl; // no of count without obstacles
	
	if(k==0)
	{
		cout<<count<<endl;
		exit(0);
	}
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
	
	//diagonal part
	int dr1[k],dc1[k],dr2[k],dc2[k],dr3[k],dc3[k],dr4[k],dc4[k];	
	int m1=0,m2=0,m3=0,m4=0;
	
	
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

	cout<<"diagonal count is "<<count1<<endl;
	count=count-count1;
	cout<<"the final count is "<<count<<endl;
	
	
}
