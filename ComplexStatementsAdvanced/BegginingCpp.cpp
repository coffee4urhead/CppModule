#include <iostream>
#include <iomanip>
using namespace std;
using std::fixed;
using std::setprecision;

int main()
{
	std::string typeOfTickets{ };
	std::cin >> typeOfTickets;

	int rows{ };
	int columns{ };
	std::cin >> rows >> columns;

	double allMoneyFromTickets{ 0 };

	int availableSeats = rows * columns;

	if (typeOfTickets == "Premiere") {
		allMoneyFromTickets = availableSeats * 12;
	}
	else if (typeOfTickets == "Normal") {
		allMoneyFromTickets = availableSeats * 7.5;
	}
	else if (typeOfTickets == "Discount") {
		allMoneyFromTickets = availableSeats * 5;
	}

	std::cout << fixed << setprecision(2) << allMoneyFromTickets << " leva" << endl;
}
