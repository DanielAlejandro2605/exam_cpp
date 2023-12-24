#include "Fireball.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fireball::Fireball()
	: ASpell("Fireball", "burnt to a crisp")
{
}

Fireball::Fireball( const Fireball & src ) : ASpell(src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fireball::~Fireball()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fireball &				Fireball::operator=( Fireball const & rhs )
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

Fireball *Fireball::clone() const
{
	return (new Fireball());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */