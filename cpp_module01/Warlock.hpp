#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock
{

	public:

		Warlock(const std::string &name, const std::string &title);
		// Warlock( Warlock const & src );
		~Warlock();

		// Warlock &		operator=( Warlock const & rhs );

		void introduce() const;

		const std::string	&getName() const;
		const std::string	&getTitle() const;

		void				setTitle(const std::string &title_value);
	
		/*Methods*/
		// learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
		void learnSpell(ASpell *new_spell);
		//  takes a string corresponding a to a spell's name, and makes the Warlock forget it.
		void forgetSpell(std::string spell_to_forget);
		/*launchSpell, takes a string (a spell name) and a reference to ATarget, that
  		launches the spell on the selected target. If it's not a known spell, does
  		nothing.*/
		void launchSpell(std::string spell, const ATarget &target);
	private:
		std::string									name;
		std::string 								title;

		std::map<std::string, ASpell *>				spells;
		std::map<std::string, ASpell *>::iterator 	it_spells;
};


#endif /* ********************************************************* WARLOCK_H */