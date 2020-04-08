#include<iostream>
using namespace std;
int main()
{
	for(int i=-1;i<=10;i++)
	{
		if(i<5)
		continue;
		else
		break;
		cout<<"abc"<<endl;
	}
}
/* how many times abc will print?
A)Infinite times
B)11 times
C)0 times
D)10 times
Solution is 0 times, here when i<5 loop will continue and skip the remaining steps and increment itself, when i=5 loop will come into else
part and break itself. since there is nothing outside the loop therefore it won't print anything.*/
