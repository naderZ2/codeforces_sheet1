#include <iostream>

using namespace std;

int main() {
	// Declare a variable to store the input value.
	long long n;

	// Read the input value from the console.
	cin >> n;

	// Calculate the summation of the numbers between 1 and N.
	long long summation = (n * (n + 1)) / 2;

	// Print the summation to the console.
	cout << summation << endl;

	return 0;
}
