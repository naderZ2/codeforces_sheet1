#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// Declare variables to store the input values.
	double a, b;

	// Read the input values from the console.
	cin >> a >> b;

	// Calculate the floor, ceil, and round of A/B.
	int floor_result = floor(a / b);
	int ceil_result = ceil(a / b);
	int round_result = round(a / b);

	// Print the results to the console.
	cout << "Floor " << a << " / " << b << " = " << floor_result << endl;
	cout << "Ceil " << a << " / " << b << " = " << ceil_result << endl;
	cout << "Round " << a << " / " << b << " = " << round_result << endl;

	return 0;
}
