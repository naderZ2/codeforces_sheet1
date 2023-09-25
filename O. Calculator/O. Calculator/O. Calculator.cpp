#include <iostream>

using namespace std;

int main() {
    // Declare variables to store the input values and the result.
    double a, b, result;
    char operation;

    // Read the input values and the operation from the console.
    cin >> a >> operation>> b;

    // Perform the operation and store the result.
    switch (operation) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        cout << "Invalid operation" << endl;
        return 1;
    }

    // Print the result to the console.
    cout << result << endl;

    return 0;
}
