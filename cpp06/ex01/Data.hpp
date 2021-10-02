#ifndef DATA_HPP
# define DATA_HPP

#include <string>
#include <stdint.h>

struct Data {
    
    public:

        Data(const std::string &data);

        const std::string data;
};

uintptr_t   serialize(Data* ptr);

Data*       deserialize(uintptr_t raw);

#endif // DATA_HPP
