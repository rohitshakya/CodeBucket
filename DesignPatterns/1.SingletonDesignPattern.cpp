#include<bits/stdc++.h>
using namespace std;

class Singleton{
	private:
		static Singleton *obj;
		Singleton()
		{
			cout<<"in constructor "<<endl;
		}
	public:
		
		static Singleton* getInstance()
		{
			if(obj==NULL)
			{
				obj = new Singleton();
			}
			return obj;
		}
};

	Singleton* Singleton ::obj = NULL;
int main()
{
	 
	cout<<"hello world "<<endl;
	Singleton *obj = Singleton::getInstance();
	Singleton *obj2 = Singleton::getInstance();
	cout<<obj2<<endl;
	cout<<obj<<endl;


}

