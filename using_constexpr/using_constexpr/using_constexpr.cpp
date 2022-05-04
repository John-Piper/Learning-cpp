// using_constexpr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const double PI = 3.14286;

constexpr double get_double_pi() {

    return PI * 2;

}

int main()
{

    double double_pi = get_double_pi();

    std::cout << "This collects double pi using a constrxpr function" << std::endl;

    std::cout << "double pi: " << double_pi << std::endl;

    std::cout << "double pi from a function call: " << get_double_pi() << std::endl;

}

