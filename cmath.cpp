#include <iostream>
#include <cmath>    // For log and log10 functions
#include <iomanip>  // For setprecision
using namespace std;
// Logarithm Calculator with Custom Base
int main() {
    char choice;
    do {
      double number, base, result;
      
      // Get the number and base from the user
      cout << "Enter the number: ";
      cin >> number;
      cout << "Enter the base: ";
      cin >> base;

      // Check if the base is valid
      if (base <= 0 || base == 1) {
          cout << "Base must be greater than 0 and not equal to 1." << endl;
      } else if (number <= 0) {
          cout << "Number must be greater than 0." << endl;
      } else {
          // Calculate the logarithm
          result = log(number) / log(base);  // Using log base e (natural log)
          cout << "Log base " << base << " of " << number << " is: " << setprecision(6) << result << endl;
      }
      
      // Ask the user if they want to continue
      cout << "Do you want to perform another calculation? (y/n): ";
      cin >> choice;
      
    } while (choice == 'Y' || choice == 'y');
    cout << "Thank you for using the program!" << endl;
    
    return 0;
}
