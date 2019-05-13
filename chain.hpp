#pragma once
#include "taskIterator.hpp"

namespace itertools
{
template<class Container1, class Container2>
sIterator<Container2> chain(Container1 a, Container2 b);
}