//6. Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
	int x,y,z,avg;
	cout<<"Enter the three nos. "<<endl;
	cin>>x>>y>>z;
	avg=(x+y+z)/3;
	cout<<"the average of given three nos. is "<< avg;
	return 0;
}
