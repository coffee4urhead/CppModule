#include <iostream>
#include<iomanip>
using std::fixed;
using std::setprecision;
using namespace std;

int main()
{
	int number1{ };
	int number2{ };
	std::cin >> number1 >> number2;

	std::string operationType{ };
	std::cin >> operationType;

	if (operationType == "+" || operationType == "-" || operationType == "*") {
		bool isAddition = operationType == "+" ? true : false;
		bool isSubtraction = operationType == "-" ? true : false;

		if (isAddition) {
			int res = number1 + number2;
			string isResultEven = res % 2 == 0 ? "even" : "odd";
			std::cout << number1 << " " << operationType << " " << number2 << " " << "=" << " " << res << " " << "-" << " " << isResultEven;
		}
		else if (isSubtraction) {
			int res = number1 - number2;
			string isResultEven = res % 2 == 0 ? "even" : "odd";
			std::cout << number1 << " " << operationType << " " << number2 << " " << "=" << " " << res << " " << "-" << " " << isResultEven;
		}
		else {
			int res = number1 * number2;
			string isResultEven = res % 2 == 0 ? "even" : "odd";
			std::cout << number1 << " " << operationType << " " << number2 << " " << "=" << " " << res << " " << "-" << " " << isResultEven;
		}
	}
	else if (operationType == "/") {

		if (number2 == 0) {
			std::cout << "Cannot divide " << number1 << " by zero" << endl;
			return 1;
		}
		std::cout << fixed << setprecision(2) << number1 << " " << operationType << " " << number2 << " " << "=" << " " << (double)number1 / number2 << endl;
	}
	else if (operationType == "%") {

		if (number2 == 0) {
			std::cout << "Cannot divide " << number1 << " by zero" << endl;
			return 1;
		}

		int remainder = number1 % number2;

		std::cout << number1 << " " << operationType << " " << number2 << " " << "=" << " " << remainder << endl;
	}
}
