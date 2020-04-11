#include<iostream>//hyrirical
using namespace std;
class mother//base class
{
	public:
		int mpv;
		mother()
		{
			cout<<"mother";
		}
		};
		class daughter:public mother//sub class of mother
		{
			public:
				int dpv;
			
		};
		class son:public mother//sub class of daughter and sub sub class of mother
		{
				public:
					int gdpv;
		};
		int main()
		{
			
			daughter d;
			son s;
			cout<<"rohit shakya"<<endl;
		}
