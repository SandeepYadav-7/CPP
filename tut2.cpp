#include <iostream>
using namespace std;

/* input stream: flow of bytes from input device to memory
 * output stream: flow of bytes from memory to output device
 *
 *
 */

int main() {
  int num1, num2;
  cout << "Enter first number: "; // << is insertion operator
  cin >> num1;                    // >> is extraction operator
  cout << "\nEnter second number: ";
  cin >> num2;

  cout << "The sum is: " << num1+num2;


  return 0;
}
