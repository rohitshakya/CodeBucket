#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int i,n,arr[n+1],function=0,x;
	cout<<"Enter the highest degree of the polynomial:";
	cin>>n;
	cout<<"Enter the coefficient from higher polynomial to lower:";
	for(i=0;i<=n;++i)
	{
		cin>>arr[i];
	}
	cout<<"The function is";
	for(i=0;i<=n;++i) {
		cout<<"+"<<arr[i]<<"x^"<<(n-i);
	}
	cout<<endl;
	cout<<"Enter the value of x:";
	cin>>x;
	for(i=0;i<=n;++i) {
		function=function+(arr[i]*pow(x,n-i));
	}
	cout<<"The value of the function is:"<<function;
}
