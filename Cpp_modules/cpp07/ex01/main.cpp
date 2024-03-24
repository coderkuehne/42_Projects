#include <iostream>
#include "iter.hpp"

int main()
{
  int intArray[] = {1, 2, 3, 4, 5};
  char charArray[] = {'a', 'b', 'c', 'd', 'e'};

  std::cout << "Printing intArray elements" << std::endl;
  iter(intArray, 5, printElement<int>);

   std::cout << "Printing charArray elements" << std::endl;
    iter(charArray, 5, printElement<char>);

  return (0);
}
