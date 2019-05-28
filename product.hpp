#pragma once
#include <string.h>
#include <utility>
#include <assert.h>
#include <iostream>
#include "taskIterator.hpp"
#include "range.hpp"
#include "chain.hpp"
// #include "product.hpp"
#include "zip.hpp"
// #include "powerset.hpp"

namespace itertools{
	template <class T, class P>
	DummyIterable product(T, P){return DummyIterable{};}
} 

// using namespace std;

// namespace itertools {

//     bool flag = false;
//     template <typename T1, typename T2> 
//     class product {
    
//     private:
//         T1 itr1;
//         T2 itr2;
//         bool flag = false;

//     public:
//     	// CONSTRUCTOR
//         product(T1 start, T2 end) :  itr1(start), itr2(end) {
//               if(!(end.begin() != end.end())) 
//               	flag = true;
//             } 
        
//    		auto begin() const {
//               return iterator<decltype(itr1.begin()),decltype(itr2.begin())>(itr1.begin(), itr2.begin());
//              }
//         auto end() const {
//               return iterator<decltype(itr1.end()),decltype(itr2.end())>(itr1.end(), itr2.end());
//              }
//     	template <typename C1, typename C2>
//         	class iterator {

//         	private:
//             	C1 itrA; 
//             	C2 itrB; 
//             	C2 posB;
//               	bool index = false;

//         	public:
//         		//CONSTRUCTOR
//             	iterator(C1 itA , C2 itB): itrA(itA) , itrB(itB) , posB(itrB){}

//             	//OPERATORS
//               	iterator& operator++() {
//               	if(!index)
//               		++itrB;
//               	return *this;
//               	}

//               	bool operator!=(iterator const & other){
//                 	if ((itrA != other.itrA) && !(itrB != other.itrB)){
//                     	index = true;
//                   	}
//                 	if(index){
//                   		itrB = posB;
//                   		++itrA;
//                   		index = false;
//                 	}
//                 	return (itrA != other.itrA && !index);
//               	}

//               	auto operator*() const{
//                		return pair<decltype(*itrA),decltype(*itrB)> (*itrA,*itrB);
//               	}
         
//         };
//     };

// }