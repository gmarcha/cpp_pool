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
