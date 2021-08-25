#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	public:
	
		Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed &src);
		virtual ~Fixed();

		Fixed&				operator=(const Fixed &rhs);

		Fixed&				operator++(void);
		Fixed&				operator--(void);
		Fixed				operator++(int);
		Fixed				operator--(int);

		Fixed				operator+(const Fixed &rhs) const;
		Fixed				operator-(const Fixed &rhs) const;
		Fixed				operator*(const Fixed &rhs) const;
		Fixed				operator/(const Fixed &rhs) const;

		bool				operator==(const Fixed &rhs) const;
		bool				operator!=(const Fixed &rhs) const;
		bool				operator<(const Fixed &rhs) const;
		bool				operator>(const Fixed &rhs) const;
		bool				operator<=(const Fixed &rhs) const;
		bool				operator>=(const Fixed &rhs) const;

		int					getRawBits(void) const;
		void				setRawBits(const int raw);

		float				toFloat(void) const;
		int					toInt(void) const;

		static Fixed&		min(Fixed &a, Fixed &b);
		static Fixed&		max(Fixed &a, Fixed &b);

		static const Fixed&	min(const Fixed &a, const Fixed &b);
		static const Fixed&	max(const Fixed &a, const Fixed &b);

	private:

		int					_rawBits;

		static const int	_nbFractionalBits;

};

std::ostream&		operator<<(std::ostream &out, const Fixed &rhs);

#endif // FIXED_HPP
