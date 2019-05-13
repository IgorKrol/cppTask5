#pragma once
#include "taskIterator.hpp"

namespace itertools
{
template<class T>
TaskIterator<T> range(T a, T b);
}