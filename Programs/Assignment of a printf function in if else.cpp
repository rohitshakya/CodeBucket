#include<iostream>
using namespace std;
int main()
{
	char ch;
	if(ch=printf(""))
	cout<<"It matters\n";
	else
	cout<<"It doesn't matter\n";
}
/* Guess the output?
A)It matters
B)It doesn't matter
C)matter
D)No Output
Solution is:It doesn't matter, because if printf assigns to a char then the value of char is the size of the string which printf contain,
and here the size of printf is null or zero therefore if statement got 0 so the else part will executed here. 
Note: "if" statement execute on every non zero value*/
