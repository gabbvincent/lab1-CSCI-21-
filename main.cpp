/* lab1
 *
 * Vincent Gabb
 * 08/25/2020
 */
#include <iostream>

using namespace std;

// uncomment the above "using" directive and you can write:
//   cout instead of std::cout
//   cin  instead of std::cin
//   endl instead of std::endl

// QUESTIONs do not have to be answered -- they are there for your consideration.

int main() {
  // 1. Print a greeting

  cout << "Greetings!\n\n";

  // 2. Declare 2 integer variables

  int int1;

  int int2;

  // 3. Prompt for the first integer
  
  cout << "Enter a number: ";

  // 4. Read in the first integer

  cin >> int1;

  // 5. Prompt for the second integer

  cout << "Enter another number: ";

  // 6. Read in the second integer

  cin >> int2;

  // 7. Display the result of adding the two variables together
  //    e.g., 3 + 2 = 5 (use the two variables and the calculated value in the output)

  cout << int1 << "+" << int2 << " = " << (int1 + int2) << "\n"; 

  // 8. Display the result of subtracting the second integer from the first
  //    e.g., 3 - 2 = 1 (use the two variables and the calculated value in the output)

  cout << int1 << "-" << int2 << " = " << (int1 - int2) << "\n";

  // 9. Display the result of multiplying the two variables
  //    e.g., 3 * 2 = 6 (use the two variables and the calculated value in the output)

  cout << int1 << "*" << int2 << " = " << (int1 * int2) << "\n";

  // 10. Display the result of dividing the first integer by the second
  //    e.g., 3 / 2 = 1 (use the two variables and the calculated value in the output)

  cout << int1 << "/" << int2 << " = " << (int1 / int2) << "\n";

  // 11. Display the result of modding (%) the first integer by the second
  //    e.g., 3 % 2 = 1 (use the two variables and the calculated value in the output)

  cout << int1 << "%" << int2 << " = " << (int1 % int2) << "\n" << "\n";
  
  //    QUESTION: What does modulo/mod (%) do?

  // 12. Declare 2 float variables

  float float1;

  float float2;

  // 13. Prompt for the first float

  cout << "Enter a float: ";

  // 14. Read in the first float

  cin >> float1;

  // 15. Prompt for the second float

  cout << "Enter another float: ";

  // 16. Read in the second float

  cin>> float2;

  // This code will "pretty print" the float variables.
  // Try changing the "2" to other values to see what happens.
  // If you did not uncomment "using" above, you need to use std::cout
  //   on all three of these lines.
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  // 17. Display the result of adding the two variables together
  //    e.g., 3.20 + 2.10 = 5.30 (use the two variables and the calculated value in the output)

  cout << float1 << "+" << float2 << " = " << (float1 + float2) << "\n"; 

  // 18. Display the result of subtracting the second float from the first
  //    e.g., 3.20 - 2.10 = 1.10 (use the two variables and the calculated value in the output)

  cout << float1 << "-" << float2 << " = " << (float1 - float2) << "\n";

  // 19. Display the result of multiplying the two variables
  //    e.g., 3.20 * 2.10 = 6.72 (use the two variables and the calculated value in the output)

  cout << float1 << "*" << float2 << " = " << (float1 * float2) << "\n";

  // 20. Display the result of dividing the first float by the second
  //    e.g., 3.20 / 2.10 = 1.52 (use the two variables and the calculated value in the output)/

  cout << float1 << "/" << float2 << " = " << (float1 / float2) << "\n";

  // QUESTION: Why is there modulo (%) operation required for the float variables?

  return 0;
}