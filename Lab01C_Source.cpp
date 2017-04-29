// ---------------------------------------------------------------
// Programming Assignment:	LAB1C
// Developer:			Jessie Stieger
// Date Written:		3/8/15
// Purpose:			Take Home Pay Calc 
// ---------------------------------------------------------------
#include <iomanip>
#include <iostream>
 
using namespace std;

void main() 
{

	double weeklySales, grossPay, fedTax, socSecurity, retirement, totDeductions, takeHomePay;
	cout << endl;
	cout << endl;
	cout << "Enter Weekly Sales: ";
	cin >> weeklySales;
	cout << endl;
	grossPay = weeklySales * .07;
	fedTax = grossPay * .18;
	socSecurity = grossPay * .06;
	retirement = grossPay * .1;
	totDeductions = fedTax + socSecurity + retirement;
	takeHomePay = grossPay - totDeductions;
	cout << fixed << setprecision(2);
   cout << "Total Sales Amount: $" << setw(8) << weeklySales << endl;
   cout << "Gross Pay (.07): $" << setw(8) << grossPay << endl;
   cout << endl;
   cout << "Federal Tax paid (.18): $" << setw(8) << fedTax << endl;
   cout << "Social Security paid (.06): $" << setw(8) << socSecurity << endl;
   cout << "Retirement contribution (.1): $" << setw(8) << retirement << endl;
   cout << "Total Deductions: $" << setw(8) << totDeductions << endl;
   cout << endl;
   cout << "Take Home Pay: $" << setw(8) << takeHomePay << endl;
}


