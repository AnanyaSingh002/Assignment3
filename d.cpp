/*A parking garage charges a $2.00 minimum fee to park for up to three hours. The garage charges an
additional $0.50 per hour for each hour or part thereof in excess of three hours. The maximum charge
for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours at a time.
Write a program that calculates and prints the parking charges for each of three customers who parked
their cars in this garage yesterday. You should enter the hours parked for each customer. Your program
should print the results in a neat tabular format and should calculate and print the total of yesterday’s
receipts. The program should use the function calculateCharges to determine the charge for each
customer. Your outputs should appear in the following format: */
#include<iostream>
using namespace std;
int main()
{
	float flhour = 0;
	float flFees = 0;
	int cyOver = 0, intHour = 0;
	cout<<"Enter number of hours parked: ";
	cin>>flhour;
	if (flhour <= 3)
		flFees = flFees  + 2.00;
	if (flhour > 3)
		cyOver = (flhour * 100);
		cyOver = cyOver % 100;
		intHour = ((flhour * 100) / 100);
	if (cyOver == 0)
		flFees = (intHour *.50) + flFees;
	else if (cyOver > 0)
		flFees = (intHour * .50) + flFees + .50;
	 if (flFees >= 10)
		flFees = 10;
	cout<<"Your total is: $"<<flFees<<endl;
	return 0;
}
