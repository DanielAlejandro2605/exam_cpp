#include "ASpell.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ASpell::ASpell(const std::string &name, const std::string &effects)
	: name(name), effects(effects)
{
	
}

ASpell::ASpell( const ASpell & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ASpell::~ASpell()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ASpell &				ASpell::operator=( ASpell const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		this->effects = rhs.getEffects();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const std::string&	ASpell::getName() const
{
	return (this->name);
}

const std::string&	ASpell::getEffects() const
{
	return (this->effects);
}

void ASpell::launch(ATarget const & target) const
{
	target.getHitBySpell((*this));
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */