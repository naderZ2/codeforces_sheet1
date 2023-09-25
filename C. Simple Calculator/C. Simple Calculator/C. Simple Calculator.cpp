#include <iostream>

using namespace std;

int main() {
	// Declare variables to store the input values.
	int x, y;

	// Read the input values from the console.
	cin >> x >> y;

	// Calculate the summation, multiplication, and subtraction of the two numbers.
	int sum = x + y;
	int product = x * y;
	int difference = x - y;

	// Print the results on new lines, without extra spaces.
	cout << "X + Y = " << sum << endl;
	cout << "X * Y = " << product << endl;
	cout << "X - Y = " << difference << endl;

	return 0;
}
