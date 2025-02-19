//hw5-12.cpp - displays the total owed
//Created/revised by <Karlie Cradock> on <2.19.25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double purchase1 = 0.0;
	double purchase2 = 0.0;
	double totalPrice = 0.0;

		//enter input data
		cout << "Purchase 1: $";
		cin >> purchase1;
		cout << "Purchase 2: $";
		cin >> purchase2;

	//calculate service charge and add $5 to code 2 purchases
		if (purchase1 < purchase2)
		totalPrice = purchase1 * 0.5 + purchase2;
		else
		totalPrice = purchase2 * 0.5 + purchase1;
		//end if

		cout << fixed << setprecision(2);
		cout << "Total Price: $" << totalPrice << endl;

	return 0;
}	//end of main function