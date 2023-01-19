//5. Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
	int l,b,h,v;
	cout<<"Enter the length ,breadth & height of cuboid "<<endl;
	cin>>l>>b>>h;
	v=l*b*h;
	cout<<"the volume of given cuboid is "<< v;
	return 0;
}
