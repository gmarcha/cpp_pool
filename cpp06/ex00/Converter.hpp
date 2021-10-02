#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>

class Converter {

    public:

        // Constructors and destructor
        Converter(const std::string &inputString);
        Converter(const Converter &src);
        virtual ~Converter();

        // Operator overloads
        Converter&	operator=(const Converter &rhs);

        // Member functions
        void    printValues() const;

    private:

        Converter();

        // Internal functions

        void    parseInputString();
        void    printChar() const;
        void    printInt() const;
        void    printFloat() const;
        void    printDouble() const;

        // Attributes

        struct Flags {

            public:

                Flags();
                Flags(const Flags &src);

                void setFlags(const bool value);

                bool    charImpossible;
                bool    intImpossible;
                bool    floatImpossible;
                bool    doubleImpossible;
    
        };

        const std::string   _inputString;
        Flags*              _inputFlags;
        size_t              _precision;
        char                _charValue;
        int                 _intValue;
        float               _floatValue;
        double              _doubleValue;

};

#endif // CONVERTER_HPP
