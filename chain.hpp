#pragma once
#include "taskIterator.hpp"

namespace itertools
{
template <class T, class P>
DummyIterable chain(T, P){return DummyIterable{};}
}
