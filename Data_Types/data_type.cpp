#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int integer, sum;
    double number, doublesum;
    string text, result;
    
    // Read and save an integer, double, and String to your variables.

    cin >> integer;
    cin >> number;
    cin.get();    // this will consume the new line (getline always consume a line)
    getline(cin, text);


    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    sum = i + integer;
    cout << sum << endl;
     
    // Print the sum of the double variables on a new line.
    doublesum = d + number;
    cout << fixed;     
    //	write the double value with fixed point notation. In default floating point
    //  notation the precision field specify the max no of digits should be displayed 
    //  both before and after the decimal, while in fixed precision field specify the 
    //  exact number of digits will be displayed after decimal.

    cout << setprecision(1) << doublesum << endl;

    // Concatenate and print the String variables on a new line
    result = s + text;
    cout << result << endl;
    // The 's' variable above should be printed first.

    return 0;
}