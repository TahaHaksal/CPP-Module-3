#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{
	public:
		// Constructors
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		
		// Destructor
		~ScavTrap();
		
		// Operators
		ScavTrap & operator=(const ScavTrap &assign);
		
		//Member Functions
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	guardGate();
		
	private:
		
};

#endif