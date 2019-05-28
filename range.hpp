#pragma once
// #include "taskIterator.hpp"
#include "iostream"


namespace itertools {

template <typename T>
	class range{
	private:

	T start;
	T end;

	class iterator{

	public:
	T itr;

	iterator(T val) : itr(val){}

	// operators
	bool operator!=(iterator const &other) const{
        return itr != other.itr;
	}
	bool operator== (range::iterator const &other) const{
        return itr == other.itr;
	}

	T operator*() const{
        return itr;
	}

	iterator &operator++(){
        ++itr;
        return *this;
	}
};

	public:
	range(T _start, T _end) : start(_start), end(_end) {}

	iterator begin() const {
        return iterator(start);
	}
	iterator end() const {
        return iterator(end);
	}
};
}
