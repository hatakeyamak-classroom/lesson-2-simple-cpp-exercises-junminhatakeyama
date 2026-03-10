#include <iostream>

int main() {
    // Create your Sum program here.
    // Your program should ask the user to enter 2 integer numbers, and then
    // output the sum of those 2 numbers.
    int num1, num2, sum_result;

    // Prompt the user to enter two integers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate the sum
    sum_result = num1 + num2;

    // Print the result
    std::cout << "The sum is:" << sum_result << std::endl;
    
}
