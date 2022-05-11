// Creates a Person Object.
// Creates another Person Object by copying the first object.
// Check both objects have the same values.
// Object one changes.
// Checks both objects do not have the same values.

#include <iostream>
#include <string>


class Person {

private:
    std::string name;
    int age;

public:   
        
    Person(std::string name, int age) :
        name(name), age(age) {}


    Person(const Person& person) {
    
        name = person.get_name();
        age = person.get_age();
    
    }

    std::string get_name() const {
    
        return name;
    
    }

    int get_age() const {
    
        return age;

    }

    void change_name(std::string new_name) {
    
        name = new_name;
    
    }

    void happy_birthday() {

        age++;

        std::cout << "Happy Birthday " << name 
            << " your age is now " << age << "." << std::endl;

    }

    bool operator == (const Person& compareTo) const {
    
        return ((name == compareTo.get_name()) && (age == compareTo.get_age()));

    }

    bool operator != (const Person & compareTo) const {
    
        return !(this->operator==(compareTo));

    }

};


int main() {

    Person little_jimmy = Person("Jimmy", 7);
    Person copy_cat_jimmy = little_jimmy;

    if (little_jimmy == copy_cat_jimmy) {
    
        std::cout << "Same values in the object." << std::endl;
    
    }

    little_jimmy.happy_birthday();

    if (little_jimmy != copy_cat_jimmy) {
    
        std::cout << "No longer the same values in the object." << std::endl;
    
    }

}
