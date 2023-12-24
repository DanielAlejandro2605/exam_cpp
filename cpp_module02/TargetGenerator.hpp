#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <string>
# include <map>

# include "ATarget.hpp"
# include "Dummy.hpp"
# include "BrickWall.hpp"

class TargetGenerator
{

	public:
		TargetGenerator();
		~TargetGenerator();
		// Teaches a target to the generator
		void learnTargetType(ATarget*);
		// that makes the generator forget a target type if it's known
		void forgetTargetType(std::string const &);
		//that creates a target of the specified type
		ATarget* createTarget(std::string const &);

	private:
		std::map<std::string, ATarget *>				_targets;
		std::map<std::string, ATarget *>::iterator 		_it_targets;
};


#endif /* ************************************************* TARGETGENERATOR_H */