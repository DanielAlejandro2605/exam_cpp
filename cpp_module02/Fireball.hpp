#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;

class Fireball : public ASpell
{

	public:

		Fireball();
		Fireball( Fireball const & src );
		~Fireball();

		Fireball &		operator=( Fireball const & rhs );

		Fireball *clone() const;
	private:

};

std::ostream &			operator<<( std::ostream & o, Fireball const & i );

#endif /* ******************************************************** FIREBALL_H */