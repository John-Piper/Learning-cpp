#include <iostream>
#include <algorithm> 
#include <string>
#include "Greet.h"

using namespace std;

Greet::Greet() {

	this->Greet::Greet("Hello", "World");

}

Greet::Greet(string word_one, string word_two)
	: interjection(word_one), noun(word_two)
{}

void Greet::output() {

	cout << interjection << " " << noun << endl;

}

void Greet::set_interjection(string word) {

	interjection = word;

}

void Greet::set_noun(string word) {

	noun = word;
}

