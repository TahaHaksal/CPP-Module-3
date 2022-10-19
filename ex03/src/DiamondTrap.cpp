#include "../headers/DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name), ClapTrap(name)
{
	name_var = "_name";
	_name = name + "_clap_name";
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_ad = FragTrap::_ad;
	std::cout << "\e[0;33mDefault Constructor called of DiamondTrap\e[0m" << std::endl;
}

// DiamondTrap::DiamondTrap(const DiamondTrap &copy)
// {
// 	(void) copy;
// 	std::cout << "\e[0;33mCopy Constructor called of DiamondTrap\e[0m" << std::endl;
// }


// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "\e[0;31mDestructor called of DiamondTrap\e[0m" << std::endl;
}


// Operators
DiamondTrap & DiamondTrap::operator=(const DiamondTrap &assign)
{
	(void) assign;
	return *this;
}

