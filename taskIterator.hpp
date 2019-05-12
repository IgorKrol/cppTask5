#pragma once
#include <iostream>
#include <iterator>

template<class T>
class taskIterator : public std::iterator<std::input_iterator_tag, T>{
    taskIterator();
     taskIterator& operator++();
  taskIterator operator++(int);
  bool operator==(const taskIterator& rhs) const;
  bool operator!=(const taskIterator& rhs) const;
  int& operator*();
};