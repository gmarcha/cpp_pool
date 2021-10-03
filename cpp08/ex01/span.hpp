#ifndef SPAN_HPP
# define SPAN_HPP

# include <ostream>
# include <vector>

class Span {

    public:

        // Constructors and destructor
        Span(unsigned int n);
        Span(const Span &src);
        virtual ~Span();

        // Operator overloads
        Span&	operator=(const Span &rhs);

        // Member functions
        void    addNumber(int nb);

        template<typename T>
        void    addNumber(T begin, T end) {
            while (begin != end) {
                addNumber(*begin++);
            }
        }

        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;

        class StorageCreationFailed : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class SpanLimitReach : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class SpanImpossible : public std::exception {
            public:
                virtual const char* what() const throw();
        };

    private:

        Span();

        // Attributes
        unsigned int        _maxSize;
        std::vector<int>*    _vector;

};

std::ostream&   operator<<(std::ostream &os, const Span &lhs);

#endif // SPAN_HPP
