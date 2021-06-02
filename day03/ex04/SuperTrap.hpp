#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
class SuperTrap:virtual public NinjaTrap, virtual public FragTrap
{
    public:
        SuperTrap(std::string name);
        ~SuperTrap();

        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
};