#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &character)
{
	*this = character;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character &Character::operator=(const Character &character)
{
	_name = character._name;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		_inventory[i] = character._inventory[i];
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
		return ;
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
		return ;
	_inventory[idx]->use(target);
}

Character::Character() : _name("default")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}