#include "AMateria.hpp"

AMateria::AMateria(std::std::string const &type) : _type(type) {}

std::std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &aMateria)
{
	*this = aMateria;
}