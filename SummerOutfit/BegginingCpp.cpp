#include <iostream>
using namespace std;

int main()
{
	int degreesOutside{ };
	std::cin >> degreesOutside;

	std::string timeOfTheDay{ };
	std::cin >> timeOfTheDay;

	std::string outfit{ };
	std::string shoes{ };

	if (timeOfTheDay == "Morning") {
		if (degreesOutside <= 18) {
			outfit = "Sweatshirt";
			shoes = "Sneakers";
		}
		else if (degreesOutside <= 24) {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
		else if (degreesOutside >= 25) {
			outfit = "T - Shirt";
			shoes = "Sandals";
		}
	}
	else if (timeOfTheDay == "Afternoon") {
		if (degreesOutside <= 18) {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
		else if (degreesOutside <= 24) {
			outfit = "T-Shirt";
			shoes = "Sandals";
		}
		else if (degreesOutside >= 25) {
			outfit = "Swimsuit";
			shoes = "Barefoot";
		}
	}
	else if (timeOfTheDay == "Evening") {
		outfit = "Shirt";
		shoes = "Moccasins";
	}

	std::cout << "It's " << degreesOutside << " degrees, get your " << outfit << " and " << shoes << "." << endl;
}
