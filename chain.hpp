#pragma once
// #include "taskIterator.hpp"
#include <iostream>
#include "range.hpp"
// #include "chain.hpp"
// #include "product.hpp"
// #include "zip.hpp"
// #include "powerset.hpp"



namespace itertools {

template <typename T1, typename T2>
	class chain {

	private:
	T1 itr1;
	T2 itr2;

	public:
	// CONSTRUCTOR
	chain(T1 _start, T2 _end) :  itr1(_start), itr2(_end) {}

	template <typename C1, typename C2>
	class iterator {

	private:
	C1 it1;
	C2 it2;
	bool flag = true;

	public:
	//CONSTRUCTOR
	iterator(C1 _it1, C2 _it2) : it1(_it1), it2(_it2) {}

	// OPERATORS

	iterator<C1,C2>& operator++() {	// if first container reached his end, advances the second container
        if(flag) ++it1;
        else ++it2;

        return *this;
	}

	bool operator!=(iterator<C1,C2>  it){
        if(flag && !(it1 != it.it1))			
                flag = false;
        if(flag)
                return it1 != it.it1;
        else
                return it2 != it.it2;
        
	}

	decltype(*it1) operator*() const {
        if(flag) return *it1;
        else return *it2;
	}

};
	auto begin() const{
        return iterator<decltype(itr1.begin()),decltype(itr2.begin())>(itr1.begin(), itr2.begin());
	}

	auto end() const{
        return iterator<decltype(itr1.end()),decltype(itr2.end())>(itr1.end(), itr2.end());
	}
};
}