#pragma once
#include "taskIterator.hpp"

namespace itertools
{
template<class Container>
sIterator<Container> range(Container a, Container b);
}