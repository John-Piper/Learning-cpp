#include <iostream>
#include <string>


void print_multi_word(int max, std::string word) {

    for (int i = 0; i < max; i++) {
    
        std::cout << word;
    
    }

    std::cout << std::endl;

}


void print_recursive_word(int num, std::string word) {

    print_multi_word(num, word);

    if (num == 1) {
    
        return;

    }

    return print_recursive_word(num - 1, word);

}


int main()
{
    
    print_recursive_word(5, "Hello Recursion ");

}

