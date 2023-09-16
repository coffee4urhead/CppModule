#include <iostream>
using namespace std;
// This is the solution for Cinema Tickets
int main()
{
	std::string dayOfTheWeek{ };
	std::cin >> dayOfTheWeek;

	if (dayOfTheWeek == "Monday" || dayOfTheWeek == "Tuesday" || dayOfTheWeek == "Friday") {
		std::cout << 12 << endl;
	}
	else if (dayOfTheWeek == "Wednesday" || dayOfTheWeek == "Thursday") {
		std::cout << 14 << endl;
	}
	else if (dayOfTheWeek == "Saturday" || dayOfTheWeek == "Sunday") {
		std::cout << 16 << endl;
	}
}
