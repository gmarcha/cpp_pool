#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <stack>

template < typename T >
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack(void): std::stack<T>() {}
		MutantStack(MutantStack const &src): std::stack<T>()
		{
			this->c = src.c;
		}

		~MutantStack(void) {}

		MutantStack&		operator=(MutantStack const &src)
		{
			if (this == &src)
				return *this;
			this->c = src.c;
			return *this;
		}
		T&		operator[](unsigned int const i)
		{
			return std::stack<T>().c[i];
		}
		// begin
		typename std::stack<T>::container_type::iterator begin(void)
		{
			return (this->c.begin());
		}
		typename std::stack<T>::container_type::const_iterator begin(void) const
		{
			return (this->c.begin());
		}
		typename std::stack<T>::container_type::reverse_iterator rbegin(void)
		{
			return (this->c.rbegin());
		}
		typename std::stack<T>::container_type::const_reverse_iterator rbegin(void) const
		{
			return (this->c.rbegin());
		}
		//end
		typename std::stack<T>::container_type::iterator end(void)
		{
			return (this->c.end());
		}
		typename std::stack<T>::container_type::const_iterator end(void) const
		{
			return (this->c.end());
		}
		typename std::stack<T>::container_type::reverse_iterator rend(void)
		{
			return (this->c.rend());
		}
		typename std::stack<T>::container_type::const_reverse_iterator rend(void) const
		{
			return (this->c.rend());
		}
};

template < typename T >
std::ostream &		operator<<(std::ostream &o, MutantStack<T> const &src)
{
	typename std::stack<T>::container_type::const_iterator	it = src.begin();
	if (src.empty())
		o << "Stack is empty" << std::endl;
	else
		while (it != src.end())
			o << *it++ << std::endl;
	return o;
}

#endif
