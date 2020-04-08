#include<iostream>
using namespace std;
int main()
{
	int a=5,b=6,c,d;
	c=a,b;
	d=(a,b);
	cout<<c<<' '<<d;
	return 0;
}
//Output :5 6
/*In the first statement, value of a will be 5, because assignment operator (=) 
has more priority more than comma (,) operator thus 5 will be assigned to the variable a.
In the second statement, value of b will be 6, because 5,6 are enclosed in braces,
and braces has more priority than assignment (=) operator. When multiple values are given with
comma operator within the braces, then right most value is considered as result of the expression. 
Thus, 6 will be assigned to the variable b.*/
