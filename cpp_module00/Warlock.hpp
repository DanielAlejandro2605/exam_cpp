#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

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
	private:
		std::string	name;
		std::string title;
};

std::ostream &			operator<<( std::ostream & o, Warlock const & i );

#endif /* ********************************************************* WARLOCK_H */