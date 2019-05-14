#pragma once
#include <string.h>
#include "taskIterator.hpp"

namespace itertools
{
template <class T>
DummyIterable powerset(T){return DummyIterable{};}
}