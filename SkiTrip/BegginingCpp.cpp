#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
using std::fixed;
using std::setprecision;

int main()
{
	short unsigned int countOfNightsSpent{ };
	std::cin >> countOfNightsSpent;

	short unsigned int actualNights = countOfNightsSpent - 1;

	string accomodationType{ };
	std::getline(cin >> ws, accomodationType);

	std::string rate{ };
	std::cin >> rate;

	double finalPrice{ 0 };

	if (accomodationType == "room for one person") {
		finalPrice = 18 * actualNights;
	}
	else if (accomodationType == "apartment") {
		finalPrice = 25 * actualNights;
	}
	else if (accomodationType == "president apartment") {
		finalPrice = 35 * actualNights;
	}

	if (actualNights <= 10) {

		if (accomodationType == "apartment") {
			finalPrice = finalPrice - (finalPrice * 0.3);
		}
		else if(accomodationType == "president apartment") {
			finalPrice = finalPrice - (finalPrice * 0.1);
		}
	}
	else if (actualNights <= 15) {

		if (accomodationType == "apartment") {
			finalPrice = finalPrice - (finalPrice * 0.35);
		}
		else if (accomodationType == "president apartment") {
			finalPrice = finalPrice - (finalPrice * 0.15);
		}
	}
	else if (actualNights > 15) {

		if (accomodationType == "apartment") {
			finalPrice = finalPrice - (finalPrice * 0.5);
		}
		else if (accomodationType == "president apartment") {
			finalPrice = finalPrice - (finalPrice * 0.20);
		}
	}

	if (rate == "positive") {
		finalPrice *= 1.25;
	}
	else {
		finalPrice *= 1.1;
	}

	std::cout << fixed << setprecision(2);

	std::cout << finalPrice << endl;
}
