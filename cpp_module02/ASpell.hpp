#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>
# include "ATarget.hpp"

class ATarget;

class ASpell
{

	public:

		ASpell(const std::string &name, const std::string &effects);
		ASpell( ASpell const & src );
		virtual ~ASpell();

		ASpell &		operator=( ASpell const & rhs );

		const std::string	&getName() const;
		const std::string	&getEffects() const;

		/*Clone pure method*/
		virtual ASpell	*clone() const = 0;

		void launch(ATarget const & target) const;
	protected:
		std::string	name;
		std::string effects;

};


#endif /* ********************************************************** ASPELL_H */