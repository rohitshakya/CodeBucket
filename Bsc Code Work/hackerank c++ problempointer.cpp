#include <stdio.h>
#include<iostream>
using namespace std;

void update(int *a,int *b) {
	if(b>a)
	{
		int temp=b;
		b=a;
		a=temp;
	}
	a=a+b;
	b=a-2*b;
	return a,b;
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<b;

    return 0;
}

