#include "FragTrap.hpp"
int main()
{
    FragTrap	Alina("Alina");
    FragTrap	Bob("Bob");
    Bob = Alina;
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
    std::cout << std::endl;
    srand(time(NULL));
    Alina.vaulthunter_dot_exe("Olga");
    Alina.vaulthunter_dot_exe("Vera");
    Alina.vaulthunter_dot_exe("Max");
    Alina.vaulthunter_dot_exe("Igor");
    Alina.vaulthunter_dot_exe("Sveta");
    Alina.vaulthunter_dot_exe("Tima");
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
    std::cout << std::endl;

}