/* cpp was created in 1979  
 * fast program, more control over systen, memory management, higb performance 
 * major versions: 11, 14, 17 
 *
 * Low level: hardware ke nazdik
 * high level: hardware se dur, logical sounding
 */

#include <iostream>
using namespace std;

int glo = 25;

void sum() {
  cout << glo;
}

// Entry point is called by OS, returns an integer
int main() {
  // std::cout << ""   // Scope Redolving operator 
  
  /* Variables:
   * local 
   * global
   *
   */
  int glo = 10;
  cout << glo;
  glo = 40;
  sum();





  /* Data types: 
   * Built-in      - int, float, double, char, boolean
   * user-defined  - struct, union, enum 
   * derived       - array, function, pointer
   *
   */
  int a=14, b=15;
  float pi=3.14;
  char c = 'd';
  bool is_true = true;
  cout << "Hello World\n";
  cout << "The value of a is: " <<a << "  The value of b is: " <<b;
  cout << "\nThe value of pi is: " <<pi;
  cout << "\nThe value of c is: " <<c;
  cout << "\nThe value of is_true is: " << is_true;
  return 0;
}
