#ifndef MATERIAICE_HPP
# define MATERIAICE_HPP

#include "AMateria.hpp"

class MateriaIce : public AMateria
{
public:
	MateriaIce();
	MateriaIce(const MateriaIce &materiaIce);
	virtual ~MateriaIce();
	MateriaIce &operator=(const MateriaIce &materiaIce);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif