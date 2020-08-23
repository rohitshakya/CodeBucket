/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(logn)
 * Title :	GCD
 */
 #include<iostream>
 using namespace std;
 int gcd(int x,int y)
 {
 	if(y==0) return x;
 	else return gcd(y,x%y);
 }
 int main()
 {
 	int x=6;int y=18;
 	int w=gcd(x,y);
 	cout<<w;
 }

