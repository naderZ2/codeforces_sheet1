#include <iostream>

using namespace std;

int main() {
	// Declare variables to store the input values.
	long long n, m;

	// Read the input values from the console.
	cin >> n >> m;

	// Extract the last digits of the two numbers.
	int last_digit_of_n = n % 10;
	int last_digit_of_m = m % 10;

	// Calculate the summation of the last digits.
	int summation = last_digit_of_n + last_digit_of_m;

	// Print the summation to the console.
	cout << summation << endl;

	return 0;
}
