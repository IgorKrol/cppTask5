#pragma once
#include <iostream>
#include <iterator>
#include

namespace itertools
{
template <class T>
class TaskIterator : public std::iterator<std::input_iterator_tag, T>
{
public:
  T b, e;

  TaskIterator();
  TaskIterator &operator++();
  TaskIterator operator++(int);
  bool operator==(const TaskIterator &rhs) const;
  bool operator!=(const TaskIterator &rhs) const;
  int &operator*() { return *this; }
  T &begin() { return b; }
  T &end() { return e; }
};
} // namespace itertools