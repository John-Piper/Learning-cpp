#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

const int QUESTIONS = 10;

void create_scores(std::vector<int>& scores);

void print_scores(std::vector<int>& scores);


int main()
{
   
	std::vector<int> test_scores;

	create_scores(test_scores);

	print_scores(test_scores);

}


void create_scores(std::vector<int>& scores) {

	for (int i = 1; i <= 10; i++) {

		scores.push_back(i);

	}

}


void print_scores(std::vector<int>& scores) {

	std::for_each(scores.begin(), scores.end(), [](int score) { std::cout << score << " "; } );

}