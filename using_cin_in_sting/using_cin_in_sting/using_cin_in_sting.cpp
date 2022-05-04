#include <iostream>
#include <string>

int main()
{
    std::string name;

    std::cout << "Please enter your name: " << std::endl;

    // How to copy a input from the terminal into a string
    std::getline(std::cin, name);

    std::cout << "Hello " << name << "." << std::endl;

}

