#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 100;
	_ad = 30;
	std::cout << "\e[0;33mDefault Constructor called of FragTrap\e[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy._name)
{
	_hp = copy._hp;
	_ep = copy._ep;
	_ad = copy._ad;
	std::cout << "\e[0;33mCopy Constructor called of FragTrap\e[0m" << std::endl;
}


// Destructor
FragTrap::~FragTrap()
{
	std::cout << "\e[0;31mDestructor called of FragTrap\e[0m" << std::endl;
}


// Operators
FragTrap & FragTrap::operator=(const FragTrap &assign)
{
	_name = assign._name;
	_hp = assign._hp;
	_ep = assign._ep;
	_ad = assign._ad;
	return *this;
}

//Member Functions
void	FragTrap::attack(const std::string& target)
{
	if (_ep > 0 && _hp > 0)
	{
		std::cout 
		<< "FragTrap " 
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
		<< "FragTrap " 
		<< _name 
		<< " doesn't have energy to attack. >:("
		<< std::endl;
	}
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (_hp > 0)
	{
		std::cout 
		<< "FragTrap " 
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

void	FragTrap::beRepaired(unsigned int amount)
{
	if (_ep > 0 && _hp > 0)
	{
		std::cout 
		<< "FragTrap " 
		<< _name 
		<< " is healing for " 
		<< amount
		<< "."
		<< std::endl;
		_ep--;
		_hp += amount;
	}else{
		std::cout 
		<< "FragTrap " 
		<< _name 
		<< " doesn't have energy to heal. >:("
		<< std::endl;
	}
}

void	FragTrap::highFivesGuys()
{
	std::cout
	<<"Happy boy FragTrap "
	<<_name
	<<" is high fiving the guys."
	<<std::endl;
}
