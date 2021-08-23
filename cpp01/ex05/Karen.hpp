#include <iostream>
#include <string>

class Karen {

	public:

		Karen();
		~Karen();

		void		complain(std::string level);

	private:

		void		debug(void) const;
		void		info(void) const;
		void		warning(void) const;
		void		error(void) const;

};

typedef struct s_complain
{
	std::string		complain;
	void			(Karen::*level) (void) const;
}					t_complain;
