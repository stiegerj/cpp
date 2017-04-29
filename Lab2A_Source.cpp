// ---------------------------------------------------------------
// Programming Assignment:	LAB2A
// Developer:			Jessie Stieger
// Date Written:		3/8/15
// Purpose:			Numerical Comparison
// ---------------------------------------------------------------

#include <iostream>
 
using namespace std;

void main() 
{
	cout << "You will be asked to enter two numbers.\nThe smallest value will be displayed or a message if they are the same." << endl << endl;
	int x, y;

	cout << "Please enter a numeric value: ";
	cin >> x;

	cout << "Please enter a numeric value: ";
	cin >> y;
	cout << endl;

if(x==y) cout << "The two numbers are equal." << endl;
else if(x>y) cout << "The smallest value is " << y << endl;
else cout << "The smallest value is " << x << endl;
}