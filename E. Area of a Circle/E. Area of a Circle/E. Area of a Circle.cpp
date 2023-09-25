#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.141592653;

int main() {
	// Declare a variable to store the radius.
	double radius;

	// Read the radius from the console.
	cin >> radius;

	// Calculate the area of the circle.
	double area = PI * radius * radius;

	// Print the area, with 9 digits after the decimal point.
	cout << fixed << setprecision(9) << area << endl;

	return 0;
}
