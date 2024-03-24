#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

typedef struct s_Data
{
  void *raw;
  uintptr_t ptr;
} t_data;

class Serializer
{
  static unintptr_t serializer(Data *ptr);
  static Data *deserializer(unintptr_t raw);
};

#endif // !SERIALIZER_HPP

