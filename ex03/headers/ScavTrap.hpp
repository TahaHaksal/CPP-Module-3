#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "../headers/ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : virtual public ClapTrap
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
		virtual void	attack(const std::string& target) = 0;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			guardGate();
		
	private:
		
};

#endif