#include "Greet.h"

int main()
{
    Greet hello_word("Hello", "World");

    hello_word.output();
    // Hello World

    Greet greet;

    greet.output();
    // Hello World

    greet.set_interjection("Bye");

    greet.set_noun("Planet");

    greet.output();
    // Bye Planet
}

