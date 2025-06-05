#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Varibles
	int month, year;
	char again;

	//Do-while loop to repeat the program while again is 'y' or 'Y'
	do
	{
		//Input the month and year
		cout << "Enter a month (1-12): ";
		cin >> month;
		cout << "Enter a year: ";
		cin >> year;

		//Check if the month is valid
		if (month < 1 || month > 12) {
			cout << "Invalid month. Please enter a month between 1 and 12." << endl;
			continue; // Skip to the next iteration if the month is invalid
		}

		//Variable for the number of days in the month
		int daysInMonth = 0;
		//Leap year check
		bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	} while (again == 'y' || again == 'Y');

    return 0;
}
