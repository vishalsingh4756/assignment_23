//9. Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter any two nos."<<endl;
	cin>>x>>y;
	if(x>y)
		cout<<x<< "is the greatest one";
	else
		cout<<y<< "is the greatest one";
	return 0;	
}
