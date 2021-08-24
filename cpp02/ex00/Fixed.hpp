#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

	public:
	
		Fixed(void);
		Fixed(const Fixed &src);
		virtual ~Fixed();

		Fixed				&operator=(const Fixed &rhs);

		int					getRawBits(void) const;
		void				setRawBits(const int raw);
	
	private:

		int					_rawBits;
		static const int	_nbFractionalBits;

};

#endif // FIXED_HPP
