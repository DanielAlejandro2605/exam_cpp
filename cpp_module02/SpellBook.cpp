#include "SpellBook.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SpellBook::SpellBook()
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SpellBook::~SpellBook()
{
	ASpell *ptr;

	for(this->_it_spells = this->_spells.begin(); this->_it_spells != this->_spells.end(); this->_it_spells++)
	{
		ptr = (this->_it_spells->second);
		if (ptr)
			delete ptr;
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void SpellBook::learnSpell(ASpell *spell)
{
	const std::string &name = spell->getName();
	// const std::string &effects = spell->getEffects();
	ASpell *new_spell = NULL;
	if (name.compare("Fireball") == 0)
		new_spell = new Fireball();
	else if (name.compare("Fwoosh") == 0)
		new_spell = new Fwoosh();
	else if (name.compare("Polymorph") == 0)
		new_spell = new Polymorph();

	this->_spells.insert(std::make_pair(new_spell->getName(), new_spell));
}

void SpellBook::forgetSpell(std::string const &spell_to_forget)
{
	this->_it_spells = this->_spells.find(spell_to_forget);
	if (this->_it_spells != this->_spells.end())
	{
		delete this->_it_spells->second;
		this->_spells.erase(this->_it_spells);
	}
}

ASpell *SpellBook::createSpell(std::string const &spell_name)
{
	ASpell *found = NULL;
	this->_it_spells = this->_spells.find(spell_name);
	if (this->_it_spells != this->_spells.end())
	{
		found = this->_spells[spell_name];
	}
	return (found);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */