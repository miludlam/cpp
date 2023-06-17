#include <iostream>
/*
 * Simple main function:
 * Read two numbers and write their sum
 */
int main() {
    // Exercise 1.2
    // prompt user to enter two numbers
    // std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;     // variables to hold the input we read
    // std::cin >> v1 >> v2;   // read input
    // std::cout << "The sum of " << v1 << " and " << v2
    //      << " is " << v1 + v2 << std::endl;

    // Exercise 1.9 - Write a program that uses a while to sum 50 to 100
    int sum = 0, val = 50, end = 100;
    // keep executing the while as long as val is between 50 and 100 inclusive
    while (val <= end) {
        sum += val++; // adds val to sum and post-increments
    }
    std::cout << "Sum of 50 to " << end << " inclusive is " << sum << std::endl;

    // Exercise 1.10 - Use a while that prints numbers decrementing from 10 to 1
    v1 = 10;
    while (v1 > 0) {
        std::cout << v1-- << std::endl;
    }

    // Exercise 1.11 - Prompt for two integers and print each number within the range
    std::cout << "Enter two numbers:" << std::endl;
    v1 = 0, v2 = 0;         // variables to hold the input we read
    std::cin >> v1 >> v2;   // read input
    if (v1 <= v2) {
        while (v1 <= v2) {
            std::cout << v1++ << std::endl;
        }
    } else {
        while (v2 <= v1) {
            std::cout << v2++ << std::endl;
        }
    }

    return 0;
}
