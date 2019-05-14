#pragma once
#include "taskIterator.hpp"
#include "range.hpp"
#include "chain.hpp"
#include "product.hpp"
#include "zip.hpp"
#include "powerset.hpp"

namespace itertools
{
template <class T, class P>
DummyIterable chain(T, P){return DummyIterable{};}
}
