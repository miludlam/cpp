#include <iostream>
/*
 * Simple main function:
 * Read two numbers and write their sum
 */
int main() {
    // Exercise 1.2
    // prompt user to enter two numbers
    // std::cout << "Enter two numbers:" << std::endl;
    // int v1 = 0, v2 = 0;     // variables to hold the input we read
    // std::cin >> v1 >> v2;   // read input
    // std::cout << "The sum of " << v1 << " and " << v2
    //      << " is " << v1 + v2 << std::endl;

    // Exercise 1.9 - Write a program that uses a while to sum 50 to 100
    // int sum = 0, val = 50, end = 100;
    // keep executing the while as long as val is between 50 and 100 inclusive
    // while (val <= end) {
    //     sum += val++; // adds val to sum and post-increments
    // }
    // std::cout << "Sum of 50 to " << end << " inclusive is " << sum << std::endl;

    // Exercise 1.10 - Use a while that prints numbers decrementing from 10 to 1
    // v1 = 10;
    // while (v1 > 0) {
    //     std::cout << v1-- << std::endl;
    // }

    // Exercise 1.11 - Prompt for two integers and print each number within the range
    // std::cout << "Enter two numbers:" << std::endl;
    // v1 = 0, v2 = 0;         // variables to hold the input we read
    // std::cin >> v1 >> v2;   // read input
    // if (v1 <= v2) {
    //     while (v1 <= v2) {
    //         std::cout << v1++ << std::endl;
    //     }
    // } else {
    //     while (v2 <= v1) {
    //         std::cout << v2++ << std::endl;
    //     }
    // }

    // Exercise 1.12 - What does the following for loop do? What is the final value of sum?
    // - Sum all integers from -100 to 100. Sum should end as 0
    // int sum = 0;
    // for (int i = -100; i <= 100; ++i) {
    //     sum += i;
    // }
    // std::cout << sum << std::endl;

    // Exercise 1.13 - Rewrite the first two exercices from 1.4.1 (Ex 1.9, 1.10, 1.11) using for loops
    // Exercise 1.9 - Write a program that uses a while to sum 50 to 100
    // int sum = 0, end = 100;
    // keep executing the while as long as val is between 50 and 100 inclusive
    // for (int val = 50; val <= end; ++val) {
    //     sum += val; // adds val to sum and post-increments
    // }
    // std::cout << "Sum of 50 to " << end << " inclusive is " << sum << std::endl;

    // Exercise 1.10 - Use -- to decrement and print 10 down to 1
    // for (int val = 10; val >= 0; --val) {
    //     std::cout << val << std::endl;
    // }

    // Exercise 1.11 - Prompt for two integers, print each integer in the range specified
    // std::cout << "Enter two numbers:" << std::endl;
    // int v1 = 0, v2 = 0;         // variables to hold the input we read
    // std::cin >> v1 >> v2;   // read input
    // if (v1 <= v2) {
    //     for (int i = v1; i <= v2; i++) {
    //         std::cout << i << std::endl;
    //     }
    // } else {
    //     for (int i = v2; i <= v1; i++) {
    //         std::cout << i << std::endl;
    //     }
    // }

    // Exercise 1.16 (1.4.3) - Write your own version of a program that prints the sum of a set of integers read from cin
    int num = 0, sum =0;
    std::cout << "Enter a series of integers separated by a space: ";
    while (std::cin >> num) {
        sum += num;
    }
    std::cout << std::endl;
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
