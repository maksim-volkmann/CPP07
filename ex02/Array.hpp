#pragma once

#include <exception>

template <typename T>
class Array{
public:
	Array();
	// Creates an array of n elements initialized by default.
	// Tip: Try to compile int * a = new int(); then display *a.
	Array(unsigned int);
	Array(const Array&);
	Array& operator=(const Array&);
	~Array();

	T& operator[](unsigned int);
	const T& operator[](unsigned int) const;
	unsigned int size() const;

private:
	T* _data;
	unsigned int _size;

};	