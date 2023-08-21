#include <iostream>
using namespace std;


#include "Date.h"






// Task 1


int main()
{
	int fDay = 0;
	int fMonth = 0;
	int fYear = 0;

	int sDay = 0;
	int sMonth = 0;
	int sYear = 0;


	cout << "First Date: \n";
	cout << "Day: "; cin >> fDay;
	cout << "Month: "; cin >> fMonth;
	cout << "Year: "; cin >> fYear;
	cout << "\n";

	cout << "Second Date: \n";
	cout << "Day: "; cin >> sDay;
	cout << "Month: "; cin >> sMonth;
	cout << "Year: "; cin >> sYear;

	Date firstDate(fDay, fMonth, fYear);
	Date secondDate(sDay, sMonth, sYear);

	Date myDate = firstDate - secondDate;


	cout << "\n\n";
	cout << "The difference between Dates:\n";
	cout << "Day: " << myDate.getDay() << endl;
	cout << "Month: " << myDate.getMonth() << endl;
	cout << "Year: " << myDate.getYear() << "\n\n\n";
	
}