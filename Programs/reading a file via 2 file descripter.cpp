#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	ifstream fd1,fd2;
	char buf1[512],buf2[512];
	fd1.open("C:\Users\Dell\Desktop\New folder\1.txt");
	
	fd2=open("C:\Users\Dell\Desktop\New folder\1.txt");
	read(fd1,buf1,sizeof(buf1));
	read(fd2,buf2,sizeof(buf2));
	
}
