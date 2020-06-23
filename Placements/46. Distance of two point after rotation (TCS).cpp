/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(1)
 * Title :  distance of two points after rotation
 * Formula : X=xcos(theta)+ysin(theta), Y=-xsin(theta)+ycos(theta)				
 */
#include<bits/stdc++.h>
using namespace std;
double distance(double x1, double y1, double x2, double y2)
{
	double d=pow((x2-x1),2)+pow((y2-y1),2);
	d=sqrt(d);
	return d;
}
int main()
{
	int v1,v2,r1,r2,n;
	cin>>v1>>r1>>v2>>r2>>n;
	cout<<v1<<" :degree/per unit time "<<v2<<" :degree/per unit time "<<endl;
	cout<<r1<<" :position of first "<<r2<<" :position of second "<<endl;
	cout<<"time:"<<n<<endl;
	double x1,x2,y1,y2;
	x1=r1*cos(v1*n*3.14/180);	//v1*n= changes in degree, (Pie/180) changes it into radians
	y1=-r1*sin(v1*n*3.14/180);
	x2=r2*cos(v2*n*3.14/180);
	y2=-r2*sin(v2*n*3.14/180);
	cout<<"distance:"<<distance(x1,y1,x2,y2)<<endl;
	
}
