#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include <ctype.h>
#include <math.h>
#include <cerrno>
#include "Converter.hpp"

Converter::Converter(void) :
    _inputString(""),
    _inputFlags(NULL),
    _precision(0),
    _charValue(0),
    _intValue(0),
    _floatValue(0.0f),
    _doubleValue(0.0) {
    
    _inputFlags = new Flags();
    parseInputString();
}

Converter::Converter(const std::string &inputString) :
    _inputString(inputString),
    _inputFlags(NULL),
    _precision(0),
    _charValue(0),
    _intValue(0),
    _floatValue(0.0f),
    _doubleValue(0.0) {

    _inputFlags = new Flags();
    parseInputString();
}

Converter::Converter(const Converter &src) :
    _inputString(src._inputString),
    _inputFlags(NULL),
    _precision(0),
    _charValue(src._charValue),
    _intValue(src._intValue),
    _floatValue(src._floatValue),
    _doubleValue(src._doubleValue) {

    _inputFlags = new Flags(*src._inputFlags);
    parseInputString();
}

Converter::~Converter() {
    delete _inputFlags;
}

Converter&  Converter::operator=(const Converter &rhs) {
    delete _inputFlags;
    _inputFlags = new Flags(*rhs._inputFlags);
    _precision = rhs._precision;
    _charValue = rhs._charValue;
    _intValue = rhs._intValue;
    _floatValue = rhs._floatValue;
    _doubleValue = rhs._doubleValue;
    parseInputString();
    return *this;
}

Converter::Flags::Flags(void) :
    charImpossible(false),
    intImpossible(false),
    floatImpossible(false),
    doubleImpossible(false) {}

Converter::Flags::Flags(const Flags &src) :
    charImpossible(src.charImpossible),
    intImpossible(src.intImpossible),
    floatImpossible(src.floatImpossible),
    doubleImpossible(src.doubleImpossible) {}

void    Converter::parseInputString(void) {

    if (_inputString[0] == '\0') {
        return ;
    }

    if (
        _inputString == "-inff" ||
        _inputString == "inff" ||
        _inputString == "+inff" ||
        _inputString == "nanf"
    ) {
        _inputFlags->charImpossible = true;
        _inputFlags->intImpossible = true;
        _floatValue = static_cast<float>(std::strtod(_inputString.c_str(), NULL));
        _doubleValue = static_cast<double>(_floatValue);
        return ;
    }

    if (
        _inputString == "-inf" ||
        _inputString == "inf" ||
        _inputString == "+inf" ||
        _inputString == "nan"
    ) {
        _inputFlags->charImpossible = true;
        _inputFlags->intImpossible = true;
        _doubleValue = std::strtod(_inputString.c_str(), NULL);
        _floatValue = static_cast<float>(_doubleValue);
        return ;
    }

    if ((_inputString[0] == '-' || _inputString[0] == '.') && _inputString[1] == '\0') {
        _charValue = _inputString[0];
        _intValue = static_cast<int>(_charValue);
        _floatValue = static_cast<float>(_charValue);
        _doubleValue = static_cast<double>(_charValue);
        return ;
    }

    if (isdigit(_inputString[0]) == 0 && _inputString[0] != '-' && _inputString[0] != '.') {
        if (_inputString[1] != '\0') {
            _inputFlags->charImpossible = true;
            _inputFlags->intImpossible = true;
            _inputFlags->floatImpossible = true;
            _inputFlags->doubleImpossible = true;
            return ;
        }
        _charValue = _inputString[0];
        _intValue = static_cast<int>(_charValue);
        _floatValue = static_cast<float>(_charValue);
        _doubleValue = static_cast<double>(_charValue);
        return ;
    }

    bool isInputAnInt = false;
    size_t i = _inputString[0] == '-' ? 1 : 0;

    while (isdigit(_inputString[i]) != 0) {
        isInputAnInt = true;
        i++;
    }

    if (_inputString[i] == '.') {
        isInputAnInt = false;
        i++;
    }

    while (isdigit(_inputString[i]) != 0) {
        _precision++;
        i++;
    }

    if (_inputString[i] == 'f') {
        if (isInputAnInt == true) {
            _inputFlags->charImpossible = true;
            _inputFlags->intImpossible = true;
            _inputFlags->floatImpossible = true;
            _inputFlags->doubleImpossible = true;
            return ;
        }
        if (i < 2) {
            _inputFlags->charImpossible = true;
            _inputFlags->intImpossible = true;
            _inputFlags->floatImpossible = true;
            _inputFlags->doubleImpossible = true;
            return ;
        }
        i++;
    }

    if (_inputString[i] != '\0') {
        _inputFlags->charImpossible = true;
        _inputFlags->intImpossible = true;
        _inputFlags->floatImpossible = true;
        _inputFlags->doubleImpossible = true;
        return ;
    }

    const double inputValue = std::strtod(_inputString.c_str(), NULL);

    if (isinf(inputValue) != false && errno == ERANGE) {
        _inputFlags->charImpossible = true;
        _inputFlags->intImpossible = true;
        _inputFlags->floatImpossible = true;
        _inputFlags->doubleImpossible = true;
        return ;
    }

    if (
        inputValue < std::numeric_limits<char>::min() ||
        inputValue > std::numeric_limits<char>::max()
    ) {
        _inputFlags->charImpossible = true;
    }

    if (
        inputValue < std::numeric_limits<int>::min() ||
        inputValue > std::numeric_limits<int>::max()
    ) {
        _inputFlags->intImpossible = true;
    }

    if (
        inputValue != 0 &&
        (inputValue < std::numeric_limits<float>::min() ||
        inputValue > std::numeric_limits<float>::max())
    ) {
        _inputFlags->floatImpossible = true;
    }

    if (_inputFlags->charImpossible == false) {
        _charValue = static_cast<char>(inputValue);
    }
    if (_inputFlags->intImpossible == false) {
        _intValue = static_cast<int>(inputValue);
    }
    if (_inputFlags->floatImpossible == false) {
        _floatValue = static_cast<float>(inputValue);
    }
    if (_inputFlags->doubleImpossible == false) {
        _doubleValue = inputValue;
    }

}

void    Converter::printValues(void) const {

    printChar();
    printInt();
    printFloat();
    printDouble();
}

void    Converter::printChar(void) const {
    std::cout << "char: ";
    if (_inputFlags->charImpossible == true) {
        std::cout << "impossible" << std::endl;
        return;
    }
    if (isprint(_charValue) == 0) {
        std::cout << "non displayable" << std::endl;
        return ;
    }
    std::cout << _charValue << std::endl;
}

void    Converter::printInt(void) const {
    std::cout << "int: ";
    if (_inputFlags->intImpossible == true) {
        std::cout << "impossible" << std::endl;
        return;
    }
    std::cout << _intValue << std::endl;
}

void    Converter::printFloat(void) const {
    std::cout << "float: " << std::fixed;
    if (_inputFlags->floatImpossible == true) {
        std::cout << "impossible" << std::endl;
        return ;
    }
    const size_t precisionToUse = _precision != 0 ? _precision : 1;
    std::cout << std::setprecision(precisionToUse) << _floatValue << "f" << std::endl;
}

void    Converter::printDouble(void) const {
    std::cout << "double: " << std::fixed;
    if (_inputFlags->doubleImpossible == true) {
        std::cout << "impossible" << std::endl;
        return ;
    }
    const size_t precisionToUse = _precision != 0 ? _precision : 1;
    std::cout << std::setprecision(precisionToUse) << _doubleValue << std::endl;
}

void    Converter::printStatus(void) const {

    std::cout << "_inputString: " << _inputString << std::endl;
    std::cout << "_inputFlags->charImpossible: " << _inputFlags->charImpossible << std::endl;
    std::cout << "_inputFlags->intImpossible: " << _inputFlags->intImpossible << std::endl;
    std::cout << "_inputFlags->floatImpossible: " << _inputFlags->floatImpossible << std::endl;
    std::cout << "_inputFlags->doubleImpossible: " << _inputFlags->doubleImpossible << std::endl;
    std::cout << "_precision: " << _precision << std::endl;
    std::cout << "_charValue: " << _charValue << std::endl;
    std::cout << "_intValue: " <<_intValue << std::endl;
    std::cout << "_floatValue: " << _floatValue << std::endl;
    std::cout << "_doubleValue: " << _doubleValue << std::endl;
}
