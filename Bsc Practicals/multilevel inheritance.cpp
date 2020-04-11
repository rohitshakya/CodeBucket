#include<iostream>//hyrirical
using namespace std;
class mother//base class
{
	public:
		int mpv;
		};
		class daughter:public mother//sub class of mother
		{
			public:
				int dpv;
			
		};
		class grand_daughter:public daughter//sub class of daughter and sub sub class of mother
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
			cout<<g.dpv<<endl<<g.mpv<<endl<<g.gdpv;//gdpv give error due to unset values;
			cout<<"rohit shakya"<<endl;
		}
