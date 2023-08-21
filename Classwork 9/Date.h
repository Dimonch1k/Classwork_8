#pragma once
class Date
{
private:
	unsigned int day;
	unsigned int month;
	unsigned int year;

public:

	Date() { day = 0; month = 0; year = 0; }
	Date(int day, int month, int year) { this->day = day; this->month = month; this->year = year; }


	int getDay() const { return day; }
	int getMonth() const { return month; }
	int getYear() const { return year; }



	Date operator-(Date date){
		Date temp;
		
		temp.day = this->day - date.day;
		if (temp.getDay() < 0) { temp.day = temp.day * (-1); }

		temp.month = this->month - date.month;
		if (temp.getMonth() < 0) { temp.month = temp.month * (-1); }

		temp.year = this->year - date.year;
		if (temp.getYear() < 0) { temp.year = temp.year * (-1); }

		return temp;
	}
};

