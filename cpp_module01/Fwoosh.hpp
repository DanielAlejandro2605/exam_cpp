#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell
{
	public:

		Fwoosh();
		Fwoosh( Fwoosh const & src );
		~Fwoosh();

		Fwoosh &		operator=( Fwoosh const & rhs );

		Fwoosh *clone() const;
	private:

};

#endif /* ********************************************************** FWOOSH_H */