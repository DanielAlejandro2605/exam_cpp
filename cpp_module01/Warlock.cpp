#include "Warlock.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Warlock::Warlock(const std::string &name, const std::string &title)
	: name(name), title(title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

// Warlock::Warlock( const Warlock & src )
// {
// }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
	ASpell *ptr;

	for(this->it_spells = this->spells.begin(); this->it_spells != this->spells.end(); this->it_spells++)
	{
		ptr = (this->it_spells->second);
		if (ptr)
			delete ptr;
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Warlock &				Warlock::operator=( Warlock const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

// std::ostream &			operator<<( std::ostream & o, Warlock const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void Warlock::introduce() const
{
	// <NAME>: I am <NAME>, <TITLE>!
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *new_spell)
{
	// const &ASpell spell((*new_spell));
	this->spells.insert(std::make_pair(new_spell->getName(), new_spell));
}

void Warlock::forgetSpell(std::string spell_to_forget)
{
	this->it_spells = this->spells.find(spell_to_forget);
	if (this->it_spells != this->spells.end())
	{
		this->spells.erase(this->it_spells);
	}
}

void Warlock::launchSpell(std::string spell, const ATarget &target)
{
	ASpell *ptr;

	this->it_spells = this->spells.find(spell);
	if (this->it_spells != this->spells.end())
	{
		ptr = (this->it_spells->second);
		ptr->launch(target);
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string&	Warlock::getName() const
{
	return (this->name);
}

const std::string&	Warlock::getTitle() const
{
	return (this->title);
}

void Warlock::setTitle(const std::string &title_value)
{
	this->title = title_value;
}


/* ************************************************************************** */