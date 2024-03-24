#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void printElement(const T& element)
{
  std::cout << element << std::endl;
}

template<typename T>
void iter(T* array, int lenght, void (*func)(const T&))
{
  for (int i = 0; i < lenght; ++i)
      func(array[i]);
}

#endif // !ITER_HPP
