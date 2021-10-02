#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void    iter(T *ptr, size_t n, void (*f)(T&)) {
    for (size_t i = 0; i < n; i++) {
        f(ptr[i]);
    }
}

template<typename T>
void    print(T &element) {
    std::cout << element << std::endl;
}

template<typename T>
void    add(T &element) {
    element++;
}

#endif // ITER_HPP
