#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;

class ATarget
{

	public:
		ATarget(const std::string &type);
		ATarget( ATarget const & src );
		virtual ~ATarget();
		ATarget &		operator=( ATarget const & rhs );

		const std::string &getType() const;

		virtual ATarget	*clone() const = 0;

		void getHitBySpell(const ASpell &spell) const;
	protected:
		std::string type;
};

#endif /* ********************************************************* ATARGET_H */