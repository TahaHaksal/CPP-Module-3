#include "ScavTrap.hpp"
void a()
{
     ScavTrap *a = new ScavTrap("Osman");

    for (int i = 0; i < 150; i++)
    {
        std::cout<<i<<": ";
        a->attack("Yarraaa");
    }
    delete a;
}
int     main()
{
   a();
   std::system("leaks serena");
}
