#include <iostream>

#include <vector.hpp>

namespace bla = ASC_bla;

int main()
{
  size_t n = 5;
  bla::Vector<double> x(n), y(n);

  for (size_t i = 0; i < x.Size(); i++)
  {
    x(i) = i;
    y(i) = 10;
  }

  bla::Vector<double> z = x + y;
  bla::Vector<double> a = x - y;

  std::cout << "x-y = " << a << std::endl;
}
