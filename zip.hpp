#pragma once
#include <string.h>
#include "taskIterator.hpp"

namespace itertools
{
template <class T, class P>
DummyIterable zip(T, P){return DummyIterable{};}
}