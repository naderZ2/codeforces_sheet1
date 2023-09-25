#include <iostream>

using namespace std;

int main() {
	// Declare a variable to store the input value.
	int ageInDays;

	// Read the input value from the console.
	cin >> ageInDays;

	// Calculate the years, months, and days.
	int years = ageInDays / 365;
	int months = (ageInDays % 365) / 30;
	int days = (ageInDays % 365) % 30;

	// Print the age in years, months, and days, followed by their respective messages.
	cout << years << " years " << months << " months " << days << " days" << endl;

	return 0;
}
