#pragma once
#include "taskIterator.hpp"

namespace itertools
{
template<class T>
TaskIterator<T> chain(TaskIterator<T> a, TaskIterator<T> b);
}