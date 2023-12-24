#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include <iostream>
# include <string>
# include "ATarget.hpp"

class ATarget;

class BrickWall : public ATarget
{

	public:

		BrickWall();
		BrickWall( BrickWall const & src );
		~BrickWall();

		BrickWall &		operator=( BrickWall const & rhs );

		BrickWall*	clone() const;
	private:

};

std::ostream &			operator<<( std::ostream & o, BrickWall const & i );

#endif /* ******************************************************* BRICKWALL_H */