#pragma once
#include "taskIterator.hpp"

namespace itertools
{
template<class T>
DummyIterable range(T,T){return DummyIterable{};}
}
