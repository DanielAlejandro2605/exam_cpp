#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;

class Polymorph : public ASpell
{

	public:

		Polymorph();
		Polymorph( Polymorph const & src );
		~Polymorph();

		Polymorph &		operator=( Polymorph const & rhs );

		Polymorph *clone() const;
	private:

};

std::ostream &			operator<<( std::ostream & o, Polymorph const & i );

#endif /* ******************************************************* POLYMORPH_H */