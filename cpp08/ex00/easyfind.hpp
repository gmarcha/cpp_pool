#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

class EasyFindFail : public std::exception {
    public:
        virtual const char* what() const throw();
};

template<typename T>
int easyFind(T &container, int nb) {
    typename T::iterator it = std::find(container.begin(), container.end(), nb);
    if (it == container.end()) {
        throw EasyFindFail();
    }
    return *it;
}

#endif // EASYFIND_HPP
