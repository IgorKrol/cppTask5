#pragma once
// #include "taskIterator.hpp"
#include "iostream"


namespace itertools {

template <typename T>
	class range{
	private:

	T _start;
	T _end;

	class iterator{

	public:
	T itr;

	iterator(T val) : itr(val){}

	// operators
	bool operator!=(iterator const &other) const{
        return itr != other.itr;
	}
	bool operator==(range::iterator const &other) const{
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
	range(T s, T e) : _start(s), _end(e) {}

	iterator begin() const {
        return iterator(_start);
	}
	iterator end() const {
        return iterator(_end);
	}
};
}
