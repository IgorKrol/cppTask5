#pragma once
#include <string.h>
#include "taskIterator.hpp"

namespace itertools
{
template <class T, class P>
DummyIterable product(T, P){return DummyIterable{};}
}