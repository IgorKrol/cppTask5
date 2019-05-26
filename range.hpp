#pragma once
#include "taskIterator.hpp"

namespace itertools
{
template<class T>
	class range{
		T first, last;

	public:
		class iterator{
		private:
			T* currVal, start, end;
		public:
			iterator(T* c, T* s, T* e) : currVal(c), start(s), end(e) {

		}
			T& operator*() const{
				assert(currVal == start && currVal < end);
				return *currVal;
			}
			// PREFIX
			iterator& operator++(){
				currVal++;
				return *this;
		}
			// POSTFIX
			const iterator operator++(int v){
				iterator temp(v);
				temp++;
				return value;
		}

			bool operator!=(const iterator& other) const{
				assert(start == other.start);
				assert(last == other.last);
				return currVal != other.currVal;
			}
	}


	range(T _start, T _end) : _start(first), _end(last){
		
	}

	const iterator begin() const{

	}

	const iterator end() const{
		
	}
}
