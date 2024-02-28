#include "Serializer.hpp"

int main()
{
	Serializer s;
	Data data;
	uintptr_t raw;

	data.id = 42;
	data.str = "Hello, World!";

	raw = s.serialize(&data);
	std::cout << "Serialized: " << raw << std::endl;

	Data *ptr = s.deserialize(raw);
	std::cout << "Deserialized: " << ptr->id << " " << ptr->str << std::endl;

	return 0;
}
