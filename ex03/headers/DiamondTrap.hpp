#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <string>

class DiamondTrap : protected ScavTrap, protected FragTrap
{
	public:
		// Constructors
		DiamondTrap(std::string name);
		// DiamondTrap(const DiamondTrap &copy);
		
		// Destructor
		~DiamondTrap();
		
		// Operators
		DiamondTrap & operator=(const DiamondTrap &assign);
		
		// Member Functions
		void			attack( std::string name );
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			whoAmI( void );

	private:
		std::string name_var;
};

#endif