#include<iostream>
using namespace std;
class vector
{
	int x;
	int y;
	int z;
	public:
		vector(){};
		vector(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		vector operator*(const vector &v1)
		{
			vector temp;
			temp.x=x+v1.x;
			temp.y=y+v1.y;
			temp.z=z+v1.z;
			
			return temp;
		}
		void display()
		{
			cout<<"vector values are:("<<x<<","<<y<<","<<z<<")";
		}
};
int main()
{
	vector v1(4,2,3);
	vector v2(7,8,4);
	vector result=v1*v2;
	result.display();
}
