#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <cmath>

class Fixed {

	public:
	
		Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed &src);
		virtual ~Fixed();

		Fixed				&operator=(const Fixed &rhs);

		float				toFloat(void) const;
		int					toInt(void) const;
		int					getRawBits(void) const;
		void				setRawBits(const int raw);
	
	private:

		int					_rawBits;
		static const int	_nbFractionalBits;

};

std::ostream&		operator<<(std::ostream &out, const Fixed &rhs);

#endif // FIXED_HPP
