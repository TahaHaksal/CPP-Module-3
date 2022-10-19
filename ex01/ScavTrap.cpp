#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 50;
	_ad = 20;
	std::cout << "\e[0;33mDefault Constructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy._name)
{
	_hp = copy._hp;
	_ep = copy._ep;
	_ad = copy._ad;
	std::cout << "\e[0;33mCopy Constructor called of ScavTrap\e[0m" << std::endl;
}


// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;31mDestructor called of ScavTrap\e[0m" << std::endl;
}


// Operators
ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
{
	_name = assign._name;
	_hp = assign._hp;
	_ep = assign._ep;
	_ad = assign._ad;
	return *this;
}

//Member Functions
void	ScavTrap::attack(const std::string& target)
{
	if (_ep > 0 && _hp > 0)
	{
		std::cout 
		<< "ScavTrap " 
		<< _name 
		<< " attacks " 
		<< target
		<< ", causing "
		<< _ad
		<< " points of damage!"
		<< std::endl;

		_ep--;
	}else{
		std::cout 
		<< "ScavTrap " 
		<< _name 
		<< " doesn't have energy to attack. >:("
		<< std::endl;
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (_hp > 0)
	{
		std::cout 
		<< "ScavTrap " 
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

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (_ep > 0 && _hp > 0)
	{
		std::cout 
		<< "ScavTrap " 
		<< _name 
		<< " is healing for " 
		<< amount
		<< "."
		<< std::endl;
		_ep--;
		_hp += amount;
	}else{
		std::cout 
		<< "ScavTrap " 
		<< _name 
		<< " doesn't have energy to heal. >:("
		<< std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout
	<<"Strong boy ScavTrap "
	<<_name
	<<" is in guarding the gate."
	<<std::endl;
}
