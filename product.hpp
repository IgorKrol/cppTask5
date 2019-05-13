#pragma once
#include <string.h>
#include "taskIterator.hpp"

namespace itertools
{
    template<class T,class P>
    TaskIterator<T> product(TaskIterator<T> a, TaskIterator<P> b);
}