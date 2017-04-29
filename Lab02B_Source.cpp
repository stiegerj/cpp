 
// ---------------------------------------------------------------
// Programming Assignment:	LAB2B
// Developer:			Jessie Stieger
// Date Written:		3/8/15
// Purpose:			Shipping
// ---------------------------------------------------------------

#include <iostream>
 
using namespace std;

void main() 
{
	cout <<"Enter a purchase amount to find out your shipping charges."<<endl<<endl;
	double purchase; 
	int shipping;

	cout <<"Please enter the amount of your purchase: $";
	cin >> purchase;

if(purchase > 5000) shipping = 20;
else if(purchase > 1000) shipping = 15;
else if(purchase > 500) shipping = 10;
else if(purchase > 250) shipping = 8;
else if(purchase > 0) shipping = 5;
else shipping = -1;

	if (shipping > 0) cout <<"The shipping charge on a purchase of "<<purchase<<" is $"<<shipping<<"."<<endl<<endl;
	else cout <<"Error, incorrect input.";

}
