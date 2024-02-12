#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_materias[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &materiaSource);
	virtual ~MateriaSource();
	MateriaSource &operator=(const MateriaSource &materiaSource);

	void learnMateria(AMateria *m);
	AMateria *createMateria(std::std::string const &type);
};

#endif