#include "BrickWall.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BrickWall::BrickWall()
	: ATarget("Inconspicuous Red-brick Wall")
{
}

BrickWall::BrickWall( const BrickWall & src ) : ATarget(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BrickWall::~BrickWall()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BrickWall &				BrickWall::operator=( BrickWall const & rhs )
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

BrickWall*	BrickWall::clone() const 
{
	return (new BrickWall());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */