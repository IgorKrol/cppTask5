#pragma once
#include <string.h>
#include "taskIterator.hpp"

namespace itertools
{
template<class T,class P>
TaskIterator<T> powerset(TaskIterator<T> a, TaskIterator<P> b);
}