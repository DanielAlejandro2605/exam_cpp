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