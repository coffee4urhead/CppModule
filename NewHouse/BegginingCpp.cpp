#include <iostream>
#include<iomanip>

using std::fixed;
using std::setprecision;

using namespace std;

int main()
{
	std::string flowerType{ };
	std::cin >> flowerType;

	int countOfFlowers{ };
	int budget{ };
	std::cin >> countOfFlowers >> budget;

	double finalPrice{ 0 };

	if (flowerType == "Roses") {
		finalPrice = countOfFlowers * 5;

		if (countOfFlowers > 80) {
			finalPrice *= 0.9;
		}
	}
	else if (flowerType == "Dahlias") {
		finalPrice = countOfFlowers * 3.80;

		if (countOfFlowers > 90) {
			finalPrice *= 0.85;
		}
	}
	else if (flowerType == "Tulips") {
		finalPrice = countOfFlowers * 2.8;

		if (countOfFlowers > 80) {
			finalPrice *= 0.85;
		}
	}
	else if (flowerType == "Narcissus") {
		finalPrice = countOfFlowers * 3;

		if (countOfFlowers < 120) {
			finalPrice *= 1.15;
		}
	}
	else if (flowerType == "Gladiolus") {
		finalPrice = countOfFlowers * 2.5;

		if (countOfFlowers < 80) {
			finalPrice *= 1.2;
		}
	}

	std::cout << fixed << setprecision(2);

	if (budget >= finalPrice) {
		std::cout << "Hey, you have a great garden with " << countOfFlowers << " " << flowerType << " " << "and " << budget - finalPrice << " leva left." << endl;
	}
	else {
		std::cout << "Not enough money, you need " << finalPrice - budget << " leva more." << endl;
	}
}
