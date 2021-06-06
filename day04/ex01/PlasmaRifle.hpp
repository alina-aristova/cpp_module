#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
    ~PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &plasma);
	void	attack() const;
	PlasmaRifle& operator=(PlasmaRifle const &plasma);
	
};

#endif