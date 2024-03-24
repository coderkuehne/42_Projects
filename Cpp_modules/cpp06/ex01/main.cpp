#include <iostream>
#include <stdint.h>
#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
    Data data(42);
    uintptr_t serializedPtr = Serializer::serialize(&data);
    Data* deserializedPtr = Serializer::deserialize(serializedPtr);
    if (deserializedPtr == &data)
	{
        std::cout << "Serialization and deserialization successful." << std::endl;
        std::cout << "Original value: " << data.getValue() << std::endl;
        std::cout << "Deserialized value: " << deserializedPtr->getValue() << std::endl;
    } 
	else
        std::cout << "Serialization and deserialization failed." << std::endl;
    return (0);
}

