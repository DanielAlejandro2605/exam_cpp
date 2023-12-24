#include "ATarget.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ATarget::ATarget(const std::string& type)
	: type(type)
{
}

ATarget::ATarget( const ATarget & src )
{
	(*this) = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ATarget::~ATarget()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ATarget &				ATarget::operator=( ATarget const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const std::string &ATarget::getType() const
{
	return (this->type);
}


void ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl; 
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */