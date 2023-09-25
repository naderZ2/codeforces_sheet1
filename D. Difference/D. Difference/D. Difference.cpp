#include <iostream>

using namespace std;

int main() {
	// Declare variables to store the input values.
	int a, b, c, d;

	// Read the input values from the console.
	cin >> a >> b >> c >> d;

	// Calculate the result of the equation.
	int difference = (a * b) - (c * d);

	// Print the result on the console, with the prefix "Difference = ".
	cout << "Difference = " << difference << endl;

	return 0;
}
