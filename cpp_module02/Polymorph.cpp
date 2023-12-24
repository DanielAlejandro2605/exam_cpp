#include "Polymorph.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Polymorph::Polymorph()
	: ASpell("Polymorph", "turned into a critter")
{
}

Polymorph::Polymorph( const Polymorph & src ) : ASpell(src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Polymorph::~Polymorph()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Polymorph &				Polymorph::operator=( Polymorph const & rhs )
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

Polymorph *Polymorph::clone() const
{
	return (new Polymorph());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */