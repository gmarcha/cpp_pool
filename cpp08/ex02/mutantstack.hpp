#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template<typename T>
class MutantStack : public std::stack<T> {

    public:

        // Constructors and destructor
        MutantStack() : std::stack<T>() {}
        MutantStack(const std::stack<T> &src) : std::stack<T>(src);
        virtual ~MutantStack();

        // Operator overloads
        MutantStack&	operator=(const MutantStack &rhs) {
            std::stack<T>::c.operator=(rhs);
            return *this;
        }

        // Member functions
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;



};

#endif // MUTANTSTACK_HPP
