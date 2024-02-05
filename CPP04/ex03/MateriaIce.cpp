#include "MateriaIce.hpp"

MateriaIce::MateriaIce() : AMateria("ice") {}

MateriaIce::MateriaIce(const MateriaIce &materiaIce) : AMateria(materiaIce) {}

MateriaIce::~MateriaIce() {}

MateriaIce &MateriaIce::operator=(const MateriaIce &materiaIce)
{
	(void)materiaIce;
	return (*this);
}

AMateria *MateriaIce::clone() const
{
	return (new MateriaIce(*this));
}

void MateriaIce::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}