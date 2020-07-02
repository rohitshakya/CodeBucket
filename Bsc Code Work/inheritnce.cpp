#include<iostream>
using namespace std;
class mother//base class
{
	public:
		int publicv;
		protected:
			int protectv;
			private:
				int privatev;
};
class daughter:public mother//derived class
{
	public:
	
	
};
     int main()
     {
     	mother mom;
     	mom.publicv=1;
     //	mom.protectedv=2;
     //	mom.privatev=3;
     cout<<mom.publicv;
     
	 }
