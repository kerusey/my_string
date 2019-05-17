#pragma once

size_t get_string_size(char* my_string) {}
void input(char* cashe) {} //python-like input


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

	string operator+ (char* donar) {}

	string double_string() {} // doubles capacity, size and copy data to new string
	void print() {} // prints char array
	void randomstring() {} // initialize new random string
	bool empty() {} // check emptyness
	void erase() {} // erase 1 element
	void erasemn() {} // erase diapason
	bool find() {}
	void insert() {}
	void copy() {}
	void swap() {}
	void convert() {}

	char* mystring() {}
	size_t mycapacity() {}
	size_t mysize() {}
};

