#pragma once
#include <string.h>
#include "stk.hpp"

namespace itertools
{
template<class T,class P>
Stk<string> zip(Stk<T> a, Stk<P> b);
}