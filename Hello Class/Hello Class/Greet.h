#pragma once
#include<string>

using namespace std;

class Greet {

private:
	string interjection;
	string noun;

public:
	Greet();

	Greet(string word_one, string word_two);

	void output();

	void set_interjection(string word);

	void set_noun(string word);

};