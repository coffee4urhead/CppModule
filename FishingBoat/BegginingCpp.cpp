#include <iostream>
#include<iomanip>
using std::fixed;
using std::setprecision;
using namespace std;

int main()
{
	int groupBudget{ };
	std::cin >> groupBudget;

	std::string season{ };
	std::cin >> season;

	int countOfFisherman{ };
	std::cin >> countOfFisherman;

	double priceForBoatRent{ 0 };

	if (season == "Spring") {
		priceForBoatRent = 3000;
	}
	else if (season == "Summer" || season == "Autumn") {
		priceForBoatRent = 4200l;
	}
	else if (season == "Winter") {
		priceForBoatRent = 2600;
	}

	if (countOfFisherman <= 6) {
		priceForBoatRent *= 0.9;
	}
	else if (countOfFisherman <= 11) {
		priceForBoatRent *= 0.85;
	}
	else if (countOfFisherman >= 12) {
		priceForBoatRent *= 0.75;
	}

	if (season != "Autumn" && countOfFisherman % 2 == 0) {
		priceForBoatRent *= 0.95;
	}

	std::cout << fixed << setprecision(2);
	if (groupBudget >= priceForBoatRent) {
		std::cout << "Yes! You have " << groupBudget - priceForBoatRent << " leva left." << endl;
	}
	else {
		std::cout << "Not enough money! You need " << priceForBoatRent - groupBudget << " leva." << endl;
	}
}
