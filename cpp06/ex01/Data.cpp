#include "Data.hpp"

Data::Data(const std::string &data) :
    data(data) {}

uintptr_t   serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data*       deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}
