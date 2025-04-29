#include "iter.hpp"
#include <iostream>

class Person {
private:
	std::string name_;
	int age_;
public:
	Person(const std::string name, int age) : name_(name), age_(age){}


	void sayMyName() const {
		std::cout << "Hello, my name is" << name_ << std::endl;
	}

	void makeMeOlder(){
		std::cout << "Age before: " << age_ << std::endl;
		age_++;
		std::cout << "Age after: " << age_ << std::endl;
	}
};



void increment(int &a){
	a = a + 1;
}

void printStuff(const int &b){
	std::cout << b << std::endl;
}

//for class
void age(Person &p){
	p.makeMeOlder();
}

int main(){
	Person people[] = {Person("Rick", 25), Person("Morty", 30)};

	int a[] = {1, 2, 3};
	const int b[] = {10, 11, 12};


	iter(a, 3, increment);

	for (int i = 0; i < 3; ++i){
		std::cout << a[i] << " ";
	}

	std::cout << "\n-----------------" << std::endl;

	iter(b, 3, printStuff);

	std::cout << "\n-----------------" << std::endl;



	iter(people, 2, age);

	return 0;
}
