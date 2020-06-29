#include<iostream>//hyrirical
using namespace std;
class mother
{
	public:
		int mpv;
		};
		class daughter:public mother
		{
			public:
				int dpv;
			
		};
		class grand_daughter:public daughter
		{
				public:
					int gdpv;
		};
		int main()
		{
			
			daughter d;
			d.mpv=1;
			cout<<d.mpv<<endl;//d=daughter variable
			grand_daughter g;//g=grand daughter variable
			g.dpv=2;
			g.mpv=3;
			cout<<g.dpv<<endl<<g.mpv<<endl<<g.gdpv=2;
			cout<<"rohit shakya"<<endl;
		}
