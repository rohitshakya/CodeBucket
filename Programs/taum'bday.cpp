#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        long b,w,bc,wc,z;
        cin>>b>>w>>bc>>wc>>z;
        long cost;
        if(bc==wc)
        {
            cost=bc*(b+w);
        }
        else if(bc>wc+z)
        {
            cost=w*wc+b*wc+b*z;
        }
        else if(wc>bc+z)
        {
            cost=b*bc+w*bc+w*z;
        }
        else 
		{
	  		cost=b*bc+w*wc;
	    }
      
      cout<<cost<<endl;
        
        t--;
    }
}
