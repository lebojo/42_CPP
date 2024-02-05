#ifndef MATERIACURE_HPP
# define MATERIACURE_HPP

#include "AMateria.hpp"

class MateriaCure : public AMateria
{
public:
	MateriaCure();
	MateriaCure(const MateriaCure &materiaCure);
	virtual ~MateriaCure();
	MateriaCure &operator=(const MateriaCure &materiaCure);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif