#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

   // Declare second integer, double, and String variables.
    int x;
    float y;
    string tekst;
    // Read and save an integer, double, and String to your variables.
    cin>> x;
    cin>> y;
    cin.ignore();
    getline(cin, tekst);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cout<<x+i<<endl;
    cout<<fixed<<setprecision(1)<<y+d<<endl;
    cout<<s+tekst<<endl;

    // Print the sum of both integer variables on a new line.

    // Print the sum of the double variables on a new line.

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
