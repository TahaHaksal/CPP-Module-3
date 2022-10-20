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

// Member functions

void	DiamondTrap::attack(std::string name)
{
	ScavTrap::attack(name);
	_ep--;
}
void	DiamondTrap::takeDamage(unsigned int amount)
{
	if (_hp > 0)
	{
		std::cout 
		<< "DiamondTrap " 
		<< _name 
		<< " took " 
		<< amount
		<< " points of damage!"
		<< std::endl;
		_hp -= amount;
	}else{
		std::cout 
		<<"Stop it already. It can't fight back. :'("
		<< std::endl;
	}
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	if (_ep > 0 && _hp > 0)
	{
		std::cout 
		<< "DiamondTrap " 
		<< _name 
		<< " is healing for " 
		<< amount
		<< "."
		<< std::endl;
		_ep--;
		_hp += amount;
	}else{
		std::cout 
		<< "DiamondTrap " 
		<< _name 
		<< " doesn't have energy to heal. >:("
		<< std::endl;
	}
}
void	DiamondTrap::whoAmI( void )
{
	std::cout
	<< "Hello my name is '"
	<< name_var
	<< "', and my ClapTrap name is '"
	<< _name
	<< "'. Nice to meet you!"
	<< std::endl;
}