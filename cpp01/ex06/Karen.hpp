#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

# define DEBUG		1
# define INFO		2
# define WARNING	3
# define ERROR		4

class Karen {

	public:

		Karen();
		~Karen();

		void		debug(void) const;
		void		info(void) const;
		void		warning(void) const;
		void		error(void) const;

};

#endif // KAREN_HPP
