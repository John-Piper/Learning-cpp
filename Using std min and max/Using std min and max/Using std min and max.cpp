#include <iostream>
#include <algorithm>
#include <vector>
#include <assert.h> 


// Similar to how the R range function works.
// Put in a vector of values and returns a vector with two values
// First value is the lowest from the input vector
// Second value is the highest value from the input vector
std::vector<int> r_style_range(std::vector<int> &x) {

	assert(x.size() > 0);

	int min = x[0];

	int max = x[0];

	for (int i = 0; i < x.size(); i++) {

		min = std::min(x[i], min);

		max = std::max(x[i], max);

	}

	std::vector<int> return_result;
	return_result.reserve(2);
	return_result.push_back(min);
	return_result.push_back(max);

	return return_result;

}


template <class T>
T r_range_template(T const& t) {

	assert(t.size() > 0);

	auto min = t[0];

	auto max = t[0];

	for (int i = 0; i < t.size(); i++) {

		min = std::min(t[i], min);

		max = std::max(t[i], max);

	}

	T return_result;
	return_result.reserve(2);
	return_result.push_back(min);
	return_result.push_back(max);

	return return_result;

}


template <class T>

void print_vector(T const& t) {

	for (const auto& value : t) {
		std::cout << value << std::endl;
	}

}


int main()
{ 	
	// using int

	std::vector<int> numbers = { 1,2,3,4,5 };

	// using function

	std::vector<int> result_int_func = r_style_range(numbers);

	for (int i = 0; i < result_int_func.size(); i++) {
		
		std::cout << result_int_func[i] << std::endl;
	
	}


	// using templates
	//---------------------------------------------------------------------
	
	// using int vector in templates

	std::vector<int> result_int_template = r_range_template<std::vector<int>>(numbers);

	print_vector<std::vector<int>>(result_int_template);


	// using character vector in templates
	
	std::vector<char> characters = { 'R', 'c', 'p', 'p' };

	std::vector<char> result_char_template = r_range_template<std::vector<char>>(characters);

	print_vector<std::vector<char>>(result_char_template);

}

