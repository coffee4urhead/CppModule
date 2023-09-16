#include <iostream>
#include<iomanip>
using namespace std;
using std::fixed;
using std::setprecision;

int main()
{
	double budget{ };
	std::cin >> budget;

	std::string season{ };
	std::cin >> season;

	std::string accomodationPlace{ };
	std::string destination{ };

	double priceForAccomodation{ 0 };

	if (budget > 1000) {
		destination = "Europe";
		accomodationPlace = "Hotel";
		priceForAccomodation = budget * 0.9;
	}
	else if (season == "winter") {
		accomodationPlace = "Hotel";

		if (budget <= 100) {
			priceForAccomodation = budget * 0.7;
			destination = "Bulgaria";
		}
		else if (budget <= 1000) {
			destination = "Balkans";
			priceForAccomodation = budget * 0.8;
		}
	}
	else if (season == "summer") {
		accomodationPlace = "Camp";

		if (budget <= 100) {
			priceForAccomodation = budget * 0.3;
			destination = "Bulgaria";
		}
		else if (budget <= 1000) {
			destination = "Balkans";
			priceForAccomodation = budget * 0.4;
		}
	}

	std::cout << fixed << setprecision(2);

	std::cout << "Somewhere in " << destination << endl;
	std::cout << accomodationPlace << " - " << priceForAccomodation << endl;
}
