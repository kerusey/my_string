#include <iostream>

size_t get_string_size(char* my_string) {
	size_t i = 0;
	while (my_string[i] != '\0')
		++i;
	++i;
	return i;
}

/*void input(char* cashe) {
	size_t size = get_string_size(cashe);
	for (auto i : size)
		cout << cashe[i];
	cout << endl;

}*/

class string {
protected:

	size_t capacity;
	size_t size;
	char* my_string;

public:
	//constructor
	string() {}
	//destructor
	~string() {}

	string operator+ (string donar) {
		string cashe;
		cashe.capacity += donar.capacity + capacity;
		cashe.size = donar.size + size;

		for (int i = 0; i < size; i++)
			cashe.my_string[i] = my_string[i];

		for (int i = size; i < cashe.size; i++)
			cashe.my_string[i] = donar.my_string[i];

		return cashe;
	}

	char* mystring() { return my_string; }
	size_t mycapacity() { return capacity; }
	size_t mysize() { return size; }

	string double_string() {

		string cashe;
		cashe.capacity = 2 * capacity;
		cashe.size = 2 * size;

		for (int i = 0; i < size; i++)
			cashe.my_string[i] = my_string[i];
		
		return cashe;
	} // doubles capacity, size and copy data to new string

	void print() {
		for (int i = 0; i < size; i++)
			std::cout << my_string[i];
		std::cout << std::endl;
	} // prints char array

	void randomstring() {} // initialize new random string

	bool empty() {
		if (my_string[0] == '\0') return true;
		
		return false;
	} // check emptyness

	void erase(size_t number) {
		--size;
		for (int i = number; i < size; i++)
			my_string[i] = my_string[i + 1];

	} // erase 1 element

	void erasediap(size_t number1, size_t number2) {
		if (number1 > number2) return;
		if (number1 == number2) erase(number1);
		else {
			size -= number2 - number1;
			for (int i = number2; i < size; i++)
				my_string[number1 + i] = my_string[number2 + i];
				
		}

	} // erase diapason

	bool find(char letter) {
		for (int i = 0; i < size; i++) if (my_string[i] == letter) return true;
		return false;
		
	}//returns true / false depending on existance char in string

	void insert(char letter, size_t position) {
		++size;
		if (size >= capacity) double_string();
		for (size_t i = position + 1; i < size; i++)
			my_string[i] = my_string[i + 1];

			my_string[position] = letter;
	}// puts letter on position

	void copy() {}

	void swap() {}

	void convert() {}

};
