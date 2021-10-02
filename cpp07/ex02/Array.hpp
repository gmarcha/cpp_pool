#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stddef.h>

template<typename T>
class Array {

    public:

        // Constructors and destructor
        Array(void) :
            _array(new T[0]()), _size(0) {}
        Array(const unsigned int n) :
            _array(new T[n]()), _size(n) {}
        Array(const Array &src) :
            _array(new T[src._size]), _size(src._size) {
            for (size_t i = 0; i < src._size; i++) {
                _array[i] = src._array[i];
            }
        }
        virtual ~Array() {
            if (_array != NULL) {
                delete[] _array;
            }
        }

        // Operator overloads
        Array&	operator=(const Array &rhs) {
            _size = rhs._size;
            if (_array != NULL) {
                delete[] _array;
            }
            _array = new T[_size]();
            for (size_t i = 0; i < _size; i++) {
                _array[i] = rhs._array[i];
            }
            return *this;
        }

        T&      operator[](const unsigned int i) {
            if (_array == NULL || _size <= i) {
                throw Array::ArrayOutOfBounds();
            }
            return _array[i];
        }

        // Member functions
        unsigned int    size(void) const {
            return _size;
        }

        class ArrayOutOfBounds : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "Out of bounds access to array";
                }
        };

    private:

        // Attributes
        T*                  _array;
        unsigned int        _size;

};

#endif // ARRAY_HPP
