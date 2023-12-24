#ifndef DUMMY_HPP
# define DUMMY_HPP

# include <iostream>
# include <string>
# include "ATarget.hpp"

class ATarget;

class Dummy : public ATarget
{

	public:

		Dummy();
		Dummy( Dummy const & src );
		~Dummy();

		Dummy &		operator=( Dummy const & rhs );
		
		Dummy*	clone() const;
	private:

};


#endif /* *********************************************************** DUMMY_H */