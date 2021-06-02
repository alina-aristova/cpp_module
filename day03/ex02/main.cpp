#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
int main()
{
    std::cout << "============Test ClapTrap start============" << std::endl;
    ClapTrap	Alina("Alina");
    std::cout << std::endl;
    Alina.meleeAttack("Oleg");
    Alina.rangedAttack("Misha");
    std::cout << std::endl;
    Alina.takeDamage(10);
    Alina.takeDamage(10);
    Alina.takeDamage(10);
    Alina.takeDamage(10);
    Alina.takeDamage(90);
    std::cout << std::endl;
    Alina.beRepaired(10);
    Alina.beRepaired(30);
    Alina.beRepaired(30);
    Alina.beRepaired(30);
    std::cout << "============Test ClapTrap finish===========" << std::endl;
    std::cout << std::endl;
    std::cout << "============Test FragTrap start============" << std::endl;
    FragTrap	Bob("Bob");
    std::cout << std::endl;
    Bob.meleeAttack("Oleg");
    Bob.rangedAttack("Misha");
    std::cout << std::endl;
    Bob.takeDamage(10);
    Bob.takeDamage(10);
    Bob.takeDamage(10);
    Bob.takeDamage(10);
    Bob.takeDamage(90);
    std::cout << std::endl;
    Bob.beRepaired(10);
    Bob.beRepaired(30);
    Bob.beRepaired(30);
    Bob.beRepaired(30);
    std::cout << std::endl;
    srand(time(NULL));
    Bob.vaulthunter_dot_exe("Olga");
    Bob.vaulthunter_dot_exe("Vera");
    Bob.vaulthunter_dot_exe("Max");
    Bob.vaulthunter_dot_exe("Igor");
    Bob.vaulthunter_dot_exe("Sveta");
    Bob.vaulthunter_dot_exe("Tima");
    std::cout << "============Test FragTrap finish===========" << std::endl;
    std::cout << std::endl;
    std::cout << "============Test ScavTrap start============" << std::endl;
    ScavTrap OldBob("bob");
    OldBob.meleeAttack("Alina");
    OldBob.rangedAttack("Alina");
    OldBob.takeDamage(50);
    OldBob.beRepaired(30);
    OldBob.challengeNewcomer("Misha");
    OldBob.challengeNewcomer("Ivan");
    OldBob.challengeNewcomer("Igor");
    std::cout << "============Test ScavTrap finish===========" << std::endl;
    std::cout << std::endl;
}