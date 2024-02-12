#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria *_inventory[4];
	std::std::string _name;
public:
	Character();
	Character(const std::std::string &name);
	Character(const Character &character);
	virtual ~Character();
	Character &operator=(const Character &character);

	std::std::string const & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif