#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <string>
# include <iostream>
class Victim
{
    public:
        Victim();
        Victim(std::string name);
        Victim(Victim const &other);
        virtual ~Victim();
        Victim    &operator=(Victim const &other);
        std::string     getName(void) const;
        virtual void    getPolymorphed(void) const;
    protected:
        std::string     _name;
};


std::ostream    &operator<<(std::ostream &out, Victim const &victim);

#endif 