// Simple C program to display "Hello World"

// Header file for input output functions
#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter 3 numbers\n";
	cin>>a;
	cin>>b;
	cin>>c;
	int max=(a>b)?a:b;
	max=(c>max)?c:max;
	cout<<"The maximum among all three is "<<max;

	return 0;
}

