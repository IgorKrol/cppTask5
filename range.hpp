#pragma once
// #include "taskIterator.hpp"
#include "iostream"


namespace itertools {

template <typename T>
	/*This class represent series from T _start...T _end
	for exemple 1...4 will iterate like this: 1,2,3,4 */
	class range{
	private:

	T _start;
	T _end;
	/* This class represent return value of range as iterator */
	class iterator{

	public:
	T itr;

	// CONSTRUCTOR
	iterator(T val) : itr(val){}

	// OPERATORS
	iterator &operator++(){
        ++itr;
        return *this;
	}

	bool operator==(range::iterator const &other) const{
        return itr == other.itr;
	}

	bool operator!=(iterator const &other) const{
        return itr != other.itr;
	}

	T operator*() const{
        return itr;
	}
};
	
	public:
	// CONSTRUCTOR
	range(T s, T e) : _start(s), _end(e) {}

	iterator begin() const {			// returns the start of range
        return iterator(_start);
	}
	iterator end() const {				// returns the end of range
        return iterator(_end);
	}
};
}
