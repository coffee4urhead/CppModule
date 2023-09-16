#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	short unsigned int hourOfExam{ };
	short unsigned int minutesOfExam{ };
	std::cin >> hourOfExam >> minutesOfExam;

	short unsigned int hourOfArrival{ };
	short unsigned int minuteOfArrival{ };
	std::cin >> hourOfArrival >> minuteOfArrival;

	int allTimeInMunitesOfExam = (hourOfExam * 60) + minutesOfExam;
	int allTimeInMinutesOfArrival = (hourOfArrival * 60) + minuteOfArrival;

	int diff{ 0 };

	if (allTimeInMinutesOfArrival > allTimeInMunitesOfExam) {
		diff = allTimeInMinutesOfArrival - allTimeInMunitesOfExam;
	}
	else if (allTimeInMinutesOfArrival < allTimeInMunitesOfExam) {
		diff = allTimeInMunitesOfExam - allTimeInMinutesOfArrival;
	}

	if (allTimeInMinutesOfArrival == allTimeInMunitesOfExam || allTimeInMinutesOfArrival == allTimeInMunitesOfExam - 30) {
		std::cout << "On time" << endl;

		if (diff < 60 && diff != 0) {
			std::cout << allTimeInMunitesOfExam - allTimeInMinutesOfArrival << " minutes before the start" << endl;
		}
	}
	else if (allTimeInMinutesOfArrival < allTimeInMunitesOfExam - 30) {
		std::cout << "Early" << endl;

		if (diff < 60) {
			std::cout << allTimeInMunitesOfExam - allTimeInMinutesOfArrival << " minutes before the start" << endl;
		}
		else if (diff >= 60) {
			int hoursOfDifference = diff / 60;
			int minutesOfDifference = diff % 60;
			int isMinutesBiggerOrSmallerThanTen = minutesOfDifference < 10 ? 1 : 0;
			std::cout << hoursOfDifference << ":" << string(isMinutesBiggerOrSmallerThanTen, '0') << minutesOfDifference << " hours before the start" << endl;
		}
	}
	else if (allTimeInMinutesOfArrival > allTimeInMunitesOfExam) {
		std::cout << "Late" << endl;

		if (diff < 60) {
			std::cout << allTimeInMinutesOfArrival - allTimeInMunitesOfExam << " " << "minutes after the start" << endl;
		}
		else if (diff >= 60) {
			int hoursOfDiff = diff / 60;
			int minutesOfDiff = diff % 60;
			int isMinutesBiggerOrSmallerThanTen = minutesOfDiff < 10 ? 1 : 0;
			std::cout << hoursOfDiff << ":" << string(isMinutesBiggerOrSmallerThanTen, '0') << minutesOfDiff << " " << "hours after the start" << endl;
		}
	}
}
