#include<iostream>
using namespace std;
//  recursion //function call itself in function definition//
void abc()
{
	cout<<"rohit shakya"<<endl;
	abc();

}
int main()
{
	cout<<"this is recursion";
	abc();
}
