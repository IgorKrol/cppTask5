#pragma once
#include <string.h>
#include "taskIterator.hpp"
#include "range.hpp"
#include "chain.hpp"
// #include "product.hpp"
// #include "zip.hpp"
// #include "powerset.hpp"
#include <iostream>
#include <utility>
using namespace std;

namespace itertools{
	template <class T, class P>
	DummyIterable zip(T, P){return DummyIterable{};}
} 

// namespace itertools {
    
//     template <typename T1, typename T2> 
//     	class zip {
    
//     	private: 
			// CONTAINERS
//         	T1 itr1;
//        	T2 itr2;

//     	public:
//     		// CONSTRUCTOR
//         	zip(T1 start, T2 end) :  itr1(start), itr2(end) {}
        
//     	template <typename C1, typename C2>
//         	class iterator {

//         	private:
//             	C1 itrA; 
//             	C2 itrB; 

//         	public:
//         		// CONSTRUCTOR
//             	iterator(C1 itA , C2 itB): itrA(itA) , itrB(itB)  {}
//             	// OPERATORS
//             	iterator<C1,C2>& operator++() {			// advances both iterators
//                		++itrA;
//                		++itrB;
//                		return *this;
//             }

//             	bool operator!=(const iterator& other){			// checks if the iterators has reached their end
//             		return (itrA != other.itrA) && (itrB != other.itrB);
//            }

//             	auto operator*() const{
//            			return pair< decltype(*itrA),decltype(*itrB)> (*itrA,*itrB);
//           }
//         }; 
		// auto begin() const{				// returns the start of the zip container
//          	 return iterator <decltype(itr1.begin()),decltype(itr2.begin())>(itr1.begin(), itr2.begin());
//         }
//         auto end() const{				// returns the end of the zip container
//           	return iterator <decltype(itr1.end()),decltype(itr2.end())>(itr1.end(), itr2.end());
//         }
//     };
//     template <typename T3,typename T4>
//     ostream &operator<<(ostream &os, const pair<T3,T4> &c){		// printing function
//     os << c.first << ',' << c.second;

//     return os;
// }

// }