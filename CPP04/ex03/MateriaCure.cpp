#include "MateriaCure.hpp"

MateriaCure::MateriaCure() : AMateria("cure") {}

MateriaCure::MateriaCure(const MateriaCure &materiaCure) : AMateria(materiaCure) {}

MateriaCure::~MateriaCure() {}

MateriaCure &MateriaCure::operator=(const MateriaCure &materiaCure)
{
	if (this == &materiaCure)
		return (*this);
	this->_type = materiaCure._type;
	return (*this);
}

AMateria *MateriaCure::clone() const
{
	return (new MateriaCure(*this));
}

void MateriaCure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}