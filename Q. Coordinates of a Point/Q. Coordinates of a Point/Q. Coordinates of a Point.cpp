#include <iostream>

using namespace std;

int main() {
  // Declare variables to store the input values.
    float x, y;

  // Read the input values from the console.
  cin >> x >> y;

  // Check the quadrant in which the point belongs to.
  if (x > 0 && y > 0) {
    cout << "Q1" << endl;
  } else if (x < 0 && y > 0) {
    cout << "Q2" << endl;
  } else if (x < 0 && y < 0) {
    cout << "Q3" << endl;
  } else if (x > 0 && y < 0) {
    cout << "Q4" << endl;
  } else if (x == 0 && y == 0) {
    cout << "Origem" << endl;
  } else if (x == 0 && y != 0) {
    cout << "Eixo Y" << endl;
  } else if (x != 0 && y == 0) {
    cout << "Eixo X" << endl;
  }

  return 0;
}
