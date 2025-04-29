#include "iter.hpp"
#include <iostream>

class Person {
private:
	std::string name_;
	int age_;
public:
	Person(const std::string name, int age) : name(name_), age(age_);


	void sayMyName() const {
		std::cout << "Hello, my name is" << name << std::endl;
	}

	void makeMeOlder(){
		age++;
	}
}


void increment(int &a){
	a = a + 1;
}

void printStuff(const int &b){
	std::cout << b << std::endl;
}

int main(){

	int a[] = {1, 2, 3};
	const int b[] = {10, 11, 12};

	iter(a, 3, increment);

	for (int i = 0; i < 3; ++i){
		std::cout << a[i] << " ";
	}

	std::cout << "\n-----------------" << std::endl;

	iter(b, 3, printStuff);

	return 0;
}
