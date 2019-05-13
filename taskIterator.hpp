#pragma once
#include <iostream>
#include <iterator>

namespace itertools
{
template <class Container>
class sIterator : public std::iterator<
                        std::input_iterator_tag,   // iterator_category
                        Container,                      // value_type
                        Container,                      // difference_type
                        const Container*,               // pointer
                        Container                       // reference
                                      >
{
public:
  Container start, finish;

  sIterator();
  sIterator<Container> &operator++();
  sIterator<Container> operator++(int);
  sIterator<Container> operator=(sIterator<Container>);
  bool operator==(const Container &other) const;
  bool operator!=(const Container &other) const;
  Container& operator*() const;
  Container* begin();
  Container* end();
};
} // namespace itertools