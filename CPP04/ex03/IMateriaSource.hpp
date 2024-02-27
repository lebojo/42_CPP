#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
public:
	IMateriaSource() {}
	IMateriaSource(const IMateriaSource& src) { *this = src; }
	IMateriaSource& operator=(const IMateriaSource& rhs) { (void)rhs; return *this; }
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* m) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif