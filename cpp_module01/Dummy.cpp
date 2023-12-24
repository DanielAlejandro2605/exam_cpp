#include "Dummy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dummy::Dummy()
	: ATarget("Target Practice Dummy")
{
}

Dummy::Dummy( const Dummy & src ) : ATarget(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dummy::~Dummy()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dummy &				Dummy::operator=( Dummy const & rhs )
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

Dummy*	Dummy::clone() const 
{
	return (new Dummy());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */