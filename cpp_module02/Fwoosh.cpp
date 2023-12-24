#include "Fwoosh.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fwoosh::Fwoosh()
	: ASpell("Fwoosh","fwooshed")
{
}

Fwoosh::Fwoosh( const Fwoosh & src ) : ASpell(src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fwoosh::~Fwoosh()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fwoosh &				Fwoosh::operator=( Fwoosh const & rhs )
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

Fwoosh *Fwoosh::clone() const
{
	return (new Fwoosh());
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */