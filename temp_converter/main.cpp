#include <iostream>

using namespace std;

int main() {

	// There is still some bugs, for example if we input string rather than number, the program will enter the loop
	// I will deal with it later in the future


	double num, f, c, k;
	char reps;

	cout << "!Welcome to the temperature converter!" << endl;

	while (true) {

		cout << "Please enter the number of the temperature: ";
		cin >> num;

		cout << "Convert to \n[1] C -> F \n[2] K -> F \n[3] F -> C \n[4] C -> K \n[5] K -> C \n[6] F -> K \n| Type q to quit the program |" << endl;
		cout << "Enter the corresponding number | command: ";
		cin >> reps;
		
		if (reps == 'q') {
			break;
		}
		
			int cor_num = reps - '0';
			

			switch (cor_num) {
			case 1:
				f = (9 * num) / 5 + 32;
				cout << "Convert Celsius(c) -> Fahrenheit(f) : " << f << endl;
				break;
			case 2:
				f = 9 * (num - 273) / 5 + 32;
				cout << "Convert Kelvin(k) -> Fahrenheit(f) : " << f << endl;
				break;
			case 3:
				c = 5 * (num - 32) / 9;
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
				k = 5 * (num - 32) / 9 + 273;
				cout << "Convert Fahrenheit -> Kelvin : " << k << endl;
				break;
			default:
				cout << "Please enter the corresponding number..." << endl;
			}
	}
	
	return 0;
}
