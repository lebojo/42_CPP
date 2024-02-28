#ifndef Serializer_HPP
# define Serializer_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
	int			id;
	std::string	str;
};

class Serializer
{
public:
	Serializer();
	~Serializer();
	Serializer(const Serializer& src);
	Serializer& operator=(const Serializer& rhs);

	static uintptr_t serialize(Data* ptr);
	static Data *deserialize(uintptr_t raw);
};

#endif