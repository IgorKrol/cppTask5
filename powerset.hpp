#pragma once
#include <string.h>
#include "taskIterator.hpp"

namespace itertools
{
template<class T,class P>
sIterator<T> powerset(sIterator<T> a, sIterator<P> b);
}