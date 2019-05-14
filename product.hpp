#pragma once
#include <string.h>
#include "taskIterator.hpp"
#include "range.hpp"
#include "chain.hpp"
#include "product.hpp"
#include "zip.hpp"
#include "powerset.hpp"

namespace itertools
{
template <class T, class P>
DummyIterable product(T, P){return DummyIterable{};}
}