#include <iostream>
#include <typeinfo>
#include <stdlib.h>
#include <limits>


enum data_type {

    INT = 1,
    DOUBLE,
    CHAR,
    BOOL,
    QUIT

};


void print_error_msg() {

    std::cout << "Error!!!, please try again." << std::endl;

}


template <class T>
void print_size(T const& t) {

    std::cout << "You have selected a type " << typeid(t).name() << "." << std::endl;

    std::cout << "The size of " << typeid(t).name() << " is " << sizeof(t) << "." << std::endl;

}


void select_data_type(const int choice) {

    switch (choice) {

    case INT:

        print_size(1);

        break;

    case DOUBLE:

        print_size(1.0);

        break;

    case CHAR:

        print_size('a');

        break;

    case BOOL:

        print_size(true);

        break;

    default :

        std::cout << "No selection chosen." << std::endl;

    }

}


bool choice_is_valid(int choice) {

    bool return_value = false;

    if (choice > 0 && choice < 6) {
    
        return_value = true;
    
    }

    return return_value;

}


int user_choice() {

    int user_choice = -1;

    while (true) {
    
        std::cout << "Please select the following to see size of data type:" << std::endl;

        std::cout << "1: INT\n2: DOUBLE\n3: CHAR\n4: BOOL\n5: QUIT" << std::endl;

        std::cin >> user_choice;

        if (std::cin.fail()) {
            
            print_error_msg();

            // clears the error flag
            // avoids an infinite loop
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            user_choice = -1;

        }

        if (choice_is_valid(user_choice)) {

            break;
        
        }

        print_error_msg();

    }

    return user_choice;

}


void run_program() {

    int current_choice = -1;

    while (true) {

        current_choice = user_choice();

        if (current_choice == QUIT) {
        
            std::cout << "You have chosen to quit the program." << std::endl;

            return;
        
        }

        select_data_type(current_choice);

    }

}


int main()
{
    
    run_program();

}

