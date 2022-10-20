#include "../headers/DiamondTrap.hpp"

int     main()
{
   DiamondTrap  *x = new DiamondTrap("Osman");

   for (int i = 0; i < 150; i++)
   {
      std::cout << i << " =>";
      x->attack("Veli");
   }
}
