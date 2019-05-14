#pragma once
#include <iostream>
#include <iterator>

namespace itertools
{
class DummyIterable
{
  public:
  int *begin() const { return nullptr; }
  int *end() const { return nullptr; }
};
} // namespace itertools