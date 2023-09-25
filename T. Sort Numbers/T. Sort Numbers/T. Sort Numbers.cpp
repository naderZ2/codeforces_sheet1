#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Declare variables to store the input values.
    int a, b, c;

    // Read the input values from the console.
    cin >> a >> b >> c;
    int arr[3] = { a,b,c };
    // Sort the input values in ascending order.
    sort(begin(arr), end(arr));

    // Print the values in ascending order, followed by a blank line.
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Print the values in the sequence as they were read.
    cout << a << " " << b << " " << c << endl;

    return 0;
}
