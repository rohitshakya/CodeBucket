#include<iostream>
using namespace std;
union dat
{
	char a[3];
	int b;
	
};
int main()
{
	dat d={'A','B','C'};//both char and int on at the same time
	cout<<d.a[0]<<d.a[1]<<d.a[2]<<endl;
	cout<<d.b;
	
}
