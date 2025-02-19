//lab5-6.cpp - displays a service charge, which is 1%
//of the purchase price; however, an additional $5 service
//charge should be added to code 2 purchases
//Created/revised by Karlie Cradock on 2.12.25

#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	char code = ' ';
	double purchase = 0.0;
	double serviceChg = 0.0;
	const double SERVICE_RATE = 0.01;

	//enter input data
	cout << "Enter code: ";
	cin >> code;
	cout << "Purchase price: $";
	cin >> purchase;

//calculate service charge and add $5 to code 2 purchases
	if (code == '2')
	serviceChg = purchase * SERVICE_RATE+ 5.00;
	else
	serviceChg = purchase * SERVICE_RATE;
	//end if

	cout << fixed << setprecision(2);
	cout << "Service charge: $" << serviceChg << endl;

	return 0;
}   //end of main function
