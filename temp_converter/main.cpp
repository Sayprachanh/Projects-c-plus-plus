#include <iostream>

using namespace std;

int main() {

	double num, f, c, k;
	int cor_num;

	cout << "!Welcome to the temperature converter!" << endl;
	cout << "Please enter the number of the temperature: ";
	cin >> num;
	cout << "Convert to \n[1] C -> F \n[2] K -> F \n[3] F -> C \n[4] C -> K \n[5] K -> C \n[6] F -> K" << endl;
	cout << "Enter the corresponding number: ";
	cin >> cor_num;
	switch (cor_num) {
	case 1:
		f = (9 * num)/5 + 32;
		cout << "Convert Celsius(c) -> Fahrenheit(f) : " << f << endl;
		break;
	case 2:
		f = 9*(num - 273)/5 + 32;
		cout << "Convert Kelvin(k) -> Fahrenheit(f) : " << f << endl;
		break;
	case 3:
		c = 5*(num - 32) / 9;
		cout << "Convert Fahrenheit(f) -> Celsius(c) : " << c << endl;
		break;
	case 4:
		k = num + 273;
		cout << "Convert Celsius(c) -> Kelvin(k) : " << k << endl;
		break;
	case 5:
		c = num - 273;
		cout << "Convert Kelvin(k) -> Celsius : " << c << endl;
		break;
	case 6:
		k = 5*(num - 32) / 9 + 273;
		cout << "Convert Fahrenheit -> Kelvin : " << k << endl;
		break;
	default:
		cout << "Please enter the corresponding number..." << endl;
	}


	return 0;
}