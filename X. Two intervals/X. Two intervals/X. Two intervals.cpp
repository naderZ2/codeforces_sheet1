#include <iostream>

using namespace std;

int main() {
    // Declare variables to store the input values.
    int l1, r1, l2, r2;

    // Read the input values from the console.
    cin >> l1 >> r1 >> l2 >> r2;

    // Check if the two intervals intersect.
    if (l1 <= r2 && l2 <= r1) {
        // Find the intersection boundaries.
        int intersectionLeft = max(l1, l2);
        int intersectionRight = min(r1, r2);

        // Print the intersection boundaries.
        cout << intersectionLeft << " " << intersectionRight << endl;
    }
    else {
        // Print -1 if there is no intersection.
        cout << -1 << endl;
    }

    return 0;
}
