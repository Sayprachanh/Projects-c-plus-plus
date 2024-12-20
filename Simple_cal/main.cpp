#include <iostream>

using namespace std;
int main() {

	double n1;
	double n2;
	char opt;

	cout << "Welcome to the simple calculator!" << endl;
	cout << "Please enter the first number: ";
	cin >> n1;
	cout << "Please enter the second number: ";
	cin >> n2;
	cout << "Please choose the operations: ( + | - | * | / )" << endl;
	cin >> opt;

	if (opt == '+') {
		cout << "Your result: " << n1 + n2 << endl;
	}
	else if (opt == '-') {
		cout << "Your result: " << n1 - n2 << endl;
	}
	else if (opt == '*') {
		cout << "Your result: " << n1 * n2 << endl;
	}
	else if (opt == '/') {
		cout << "Your result: " << n1 / n2 << endl;
	}
	else {
		cout << "UNKNOWN!" << endl;
	}

	return 0;
}