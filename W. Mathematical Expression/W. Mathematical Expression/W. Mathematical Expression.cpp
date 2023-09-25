#include <iostream>


using namespace std;

int main() {
    // Declare variables to store the input values.
    int a, b, c;
    char s, v;




    cin >> a >> s >> b >> v >> c;

    if (s == '+')
    {
        if (a + b == c) { cout << "yes"; }
        else { cout << a + b; }
    }
    else if (s == '-')
    {
        if (a - b == c) { cout << "yes"; }
        else { cout << a - b; }
    }
    else if (s == '*')
    {
        if (a * b == c) { cout << "yes"; }
        else { cout << a * b; }
    }



    return 0;
}
