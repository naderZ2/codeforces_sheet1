#include <iostream>

using namespace std;

int main() {
    // Declare a variable to store the input character.
    char c;

    // Read the input character from the console.
    cin >> c;

    // Get the ASCII code of the character.
    int ascii = (int)c;

    // Check if the character is lowercase.
    if (ascii >= 97 && ascii <= 122) {
        // Convert the character to uppercase by adding 32.
        c = (char)(ascii + 32);
    }
    else if (ascii >= 65 && ascii <= 90) {
        // Convert the character to lowercase by subtracting 32.
        c = (char)(ascii - 32);
    }

    // Print the converted character to the console.
    cout << c << endl;

    return 0;
}
