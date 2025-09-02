#include<iostream>
using namespace std;

// Function to calculate the factorial of a number

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
} int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    
    // Check if the number is negative
    if (num < 0) {
        cout << "Error: Negative numbers do not have factorials." << endl;
        return 0;
    }
    
    // Calculate and display the factorial
    int factorial_result = factorial(num);
    cout << "Factorial of " << num << " is: " << factorial_result << endl;
    
    return 0;
}
