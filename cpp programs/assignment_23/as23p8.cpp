//8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"enter the value of x and y";
	cin>>x>>y;
	cout<<"Before swaping x="<< x <<"and y =" << y<<endl;
	z=x;
	x=y;
	y=z;
	cout<<"After swaping x="<< x <<"and y =" << y<<endl;
	return 0;
}
