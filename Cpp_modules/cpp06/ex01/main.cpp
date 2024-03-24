#include "serializer.hpp"

int main()
{
  int *nbr = 42;
  Data *ptr;

  ptr->raw = (void *)nbr;
  ptr.ptr = serializer(ptr);
  ptr->raw = deserializer(ptr.ptr);
  std::cout << reinterpret_cast<int>(*ptr) << std::endl;
}
