#include "../headers/ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hp = 10;
	_ep = 10;
	_ad = 0;
	std::cout << "\e[0;33mDefault Constructor called of ClapTrap\e[0m" << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_name = copy._name;
	_hp = copy._hp;
	_ep = copy._ep;
	_ad = copy._ad;
	std::cout << "\e[0;33mCopy Constructor called of ClapTrap\e[0m" << std::endl;

}


// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "\e[0;31mDestructor called of ClapTrap\e[0m" << std::endl;

}


// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	_name = assign._name;
	_hp = assign._hp;
	_ep = assign._ep;
	_ad = assign._ad;
	return *this;
}

//Member Functions
void	ClapTrap::attack(const std::string& target)
{
	if (_ep > 0 && _hp > 0)
	{
		std::cout 
		<< "ClapTrap " 
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
		<< "ClapTrap " 
		<< _name 
		<< " doesn't have energy to attack. >:("
		<< std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp > 0)
	{
		std::cout 
		<< "ClapTrap " 
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

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep > 0 && _hp > 0)
	{
		std::cout 
		<< "ClapTrap " 
		<< _name 
		<< " is healing for " 
		<< amount
		<< "."
		<< std::endl;
		_ep--;
		_hp += amount;
	}else{
		std::cout 
		<< "ClapTrap " 
		<< _name 
		<< " doesn't have energy to heal. >:("
		<< std::endl;
	}
}
