#include "brain.hpp"
#include <sstream>
#include <iostream>
std::string brain::identify(void)
{
	std::stringstream buff;
	buff << this;
	this->type = buff.str();
	return(this->type);
}