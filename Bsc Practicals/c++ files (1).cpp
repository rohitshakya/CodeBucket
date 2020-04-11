#include<iostream>
using namespace std;
class abc{
	public:
		void ab(int i)
		{
			cout<<i*10<<endl;
		}
	private:
		void bc(int i){
			cout<<i*3<<endl;
		}
	protected:
		void ac(int i)
		{
			cout<<i<<endl;
		}
};;
class bcd:public abc{
	public:
		bcd(){
			ab(10);
			//bc(10);
			ac(10);
		}
};
class cde:bcd{
	public:
		cde(){
			ab(10);
			//bc(10);
			ac(10);
		}
};
int main()
{
	cde ob;
}
