#include<iostream>
using namespace std;
class fraction
{
	int num;
	int den;
	public:
		fraction();
		fraction(int x);
		fraction (int x,int y);
	//	fraction(const fraction& f1);//copy constructor declaretion
		void display()
		{
			cout<<"fraction is:"<<num<<"/"<<den<<endl;
			
		}
		
                                   };
int main()
{
	fraction f1;
	fraction f4(f1);//copy constructor commmand f4 copy from f1;
	fraction f2(4);
	fraction f3(6,7);
	f1.display();
	f2.display();
	f3.display();
	f4.display();
	
	
}
fraction::fraction()
{
	num=5;
	den=6;
}
fraction::fraction(int x)
{
	num=9;
	den=x;
}
fraction::fraction(int x,int y)
{
	num=y;
	den=x;
}
    /*fraction::fraction(const fraction& f1)//copy constructor definition
{
	num=f1.num;
	den=f1.den;
}      */    
