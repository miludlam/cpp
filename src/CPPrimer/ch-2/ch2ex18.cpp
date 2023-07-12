/*
 * Exercise Section 2.3.2
 * Exercise 2.18 - Write code to change the value of a pointer.
 * Write code to change the value to which a pointer points.
 */

#include <iostream>

int main() {
    // Write code to change the value of a pointer
    int ival = 42, jval = 1024;
    int *pi = &ival;    // pi is initialized and holds the address of ival
    int *pj = &jval;    // pj is initialized and holds the address of jval

    std::cout << *pi << std::endl;
    std::cout << *pj << std::endl;

    pi = pj;    // pi and pj address the same object, e.g., jval

    std::cout << *pi << std::endl;
    std::cout << *pj << std::endl;

    // Write code to change the value to which a pointer points
    *pi = 3000; // value in jval has changed; pi is unchanged

    std::cout << *pi << std::endl;
    std::cout << *pj << std::endl;
    std::cout << jval << std::endl;

    return 0;
}