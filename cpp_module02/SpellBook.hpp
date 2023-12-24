#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <string>
# include <map>
# include "ASpell.hpp"
# include "Polymorph.hpp"
# include "Fireball.hpp"
# include "Fwoosh.hpp"

class ASpell;

class SpellBook
{

	public:

		SpellBook();
		~SpellBook();

		/*Methods*/
		// that COPIES a spell in the book
		void learnSpell(ASpell *spell);
		//  that deletes a spell from the book, except if it isn't there
		void forgetSpell(const std::string &spell_to_forget);
		// that receives a string corresponding to the name of a spell, creates it, and returns it.
		ASpell *createSpell(const std::string  &spell_name);
	private:

		// SpellBook(SpellBook const &src);
		// SpellBook &opera
		std::map<std::string, ASpell *>				_spells;
		std::map<std::string, ASpell *>::iterator 	_it_spells;
};

#endif /* ******************************************************* SPELLBOOK_H */