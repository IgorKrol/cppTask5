#pragma once
#include <string.h>
#include "taskIterator.hpp"

namespace itertools
{
template<class T,class P>
sIterator<T> zip(sIterator<T> a, sIterator<P> b);
}