/* cpp was created in 1979  
 * fast program, more control over systen, memory management, higb performance 
 * major versions: 11, 14, 17 
 *
 * Low level: hardware ke nazdik
 * high level: hardware se dur, logical sounding
 */

#include <iostream>
using namespace std;

// Entry point is called by OS, returns an integer
int main() {
  // std::cout << ""   // Scope Redolving operator 
  
  /* Variables:
   * local 
   * global
   *
   */

  /* Data types: 
   * Built-in      - int, float, double, char, boolean
   * user-defined  - struct, union, enum 
   * derived       - array, function, pointer
   *
   */
  int a=14, b=15;
  float pi=3.14;
  cout << "Hello World\n";
  cout << "The value of a is: " <<a << "  The value of be is: " <<b;
  cout << "\nThe value of pi is: " <<pi;
  return 0;
}
