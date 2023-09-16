#include <iostream>
#include<iomanip>
using namespace std;
using std::fixed;
using std::setprecision;

int main()
{
	std::string month{ };
	std::cin >> month;

	short unsigned nightsCount{ };
	std::cin >> nightsCount;

	double studioPrice{ 0 };
	double apartmentPrice{ 0 };

	if (month == "May" || month == "October") {
		studioPrice = 50;

		if (nightsCount > 14) {
			studioPrice *= 0.7;
		}
		else if (nightsCount > 7) {
			studioPrice *= 0.95;
		}

		apartmentPrice = 65;
	}
	else if (month == "June" || month == "September") {
		studioPrice = 75.2;

		if (nightsCount > 14) {
			studioPrice *= 0.8;
		}

		apartmentPrice = 68.7;
	}
	else if (month == "July" || month == "August") {
		studioPrice = 76;
		apartmentPrice = 77;
	}

	if (nightsCount > 14) {
		apartmentPrice *= 0.9;
	}
	std::cout << fixed << setprecision(2);

	//Apartment output
	std::cout << "Apartment: " << apartmentPrice * nightsCount << " lv." << endl;
	//Studio output
	std::cout << "Studio: " << studioPrice * nightsCount << " lv." << endl;
}
