//lab5-3.cpp - displays the total amount due
//Created/revised by Karlie Cradock on 2.18.25

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double SHIP_CHG1 = 0.99;
	const double SHIP_CHG2 = 4.99;
	double amtOwed = 0.0;
	char member = ' ';

	//enter input items
	cout << "Amount owed before any discount and shipping: ";
	cin >> amtOwed;
	cout << "Premier Club member (Y/N)?";
	cin >> member;

	//subtract discount, if appropriate
	if (toupper(member) == 'Y')
		amtOwed -= amtOwed * 0.1;
	else 
		amtOwed -= amtOwed * 0.05;
	//end if

	//add shipping 
	if (amtOwed >= 100.0)
		amtOwed += SHIP_CHG1;
	else
		amtOwed += SHIP_CHG2;
	//end if

	//display final amount owed
	cout << fixed << setprecision(2);
	cout << "Amount owed after any discount and shipping: $" << amtOwed << endl;
	return 0;
}	//end of main function