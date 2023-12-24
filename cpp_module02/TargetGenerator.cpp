#include "TargetGenerator.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

TargetGenerator::TargetGenerator()
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

TargetGenerator::~TargetGenerator()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void TargetGenerator::learnTargetType(ATarget* target)
{
	const std::string &type = target->getType();

	this->_targets[type] = target;
}

void TargetGenerator::forgetTargetType(std::string const &target_to_forget)
{
	this->_it_targets = this->_targets.find(target_to_forget);
	if (this->_it_targets != this->_targets.end())
	{
		this->_targets.erase(this->_it_targets);
	}
}

ATarget *TargetGenerator::createTarget(std::string const &target_to_create)
{
	ATarget *found = NULL;
	this->_it_targets = this->_targets.find(target_to_create);
	if (this->_it_targets != this->_targets.end())
	{
		found = this->_it_targets->second;
	}
	return (found);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */