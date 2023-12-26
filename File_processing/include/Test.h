#ifndef TEST_H
#define TEST_H
#include <iostream>


enum class Infor : std::uint8_t
{
    haicua = 0b00000000,
    bacua = 0b01000000,
    boncua = 0b10000000,
    Invalid1 = 0b11000000,
    ninehorizonal = 0b00000000,
    ninevertical = 0b00001000,
    elevenhorizontal = 0b00010000,
    elevenvertical = 0b00011000,
    fifteenhorizontal = 0b00100000,
    Invalid2 = 0b00101000,
    Invalid3 = 0b00110000,
    Invalid4 = 0b00111000
};

//enum class Screen : std::uint8_t
//{
//    ninehorizonal = 0b00000000,
//    ninevertical = 0b00001000,
//    elevenhorizontal = 0b00010000,
//    elevenvertical = 0b00011000,
//    fifteenhorizontal = 0b00100000,
//    Invalid = 0b00101000,
//    Invalid = 0b00110000,
//    Invalid = 0b00111000
//};

Infor operator&(Infor lhs, Infor rhs) {
    return static_cast<Infor>(
        static_cast<std::underlying_type_t<Infor>>(lhs) &
        static_cast<std::underlying_type_t<Infor>>(rhs)
    );
}

class Test
{
    public:
        Test();
        virtual ~Test();



    protected:

    private:
};

#endif // TEST_H
