#include <iostream>

const int birthday {91601};

void birthdayVoid() {
    std::cout << birthday << std::endl;
}

int main() {

    // bits represent the power to raise binary to i.e. 8 bits is 2^8

    bool truthy {true};
    std::cout << sizeof(truthy) << std::endl;

    char character {'a'}; // 8 bit char 2^8
    std::cout << sizeof(character) << std::endl;

    char16_t sixteen_char {'b'}; // 16 bit char 2^16
    std::cout << sizeof(sixteen_char) << std::endl;

    char32_t thirtytwo_char {'c'}; // 32 bit char 2^32
    std::cout << sizeof(thirtytwo_char) << std::endl;

    wchar_t max_char {'d'}; // max char value
    std::cout << sizeof(max_char) << std::endl;

    signed int i {-120}; // 32 bit int 2^32 -128 to 128
    std::cout << sizeof(i) << std::endl;

    unsigned int j {256}; // 32 bit int 2^32 max 256
    std::cout <<  sizeof(j) << std::endl;

    signed long signed_long {-250250}; // 64 bits 2^64
    std::cout << sizeof(signed_long) << std::endl;

    unsigned long unsigned_long {23423412}; // 64 bits 2^64
    std::cout << sizeof(unsigned_long) << std::endl;

    long long looooonnngInt {3459034785203945745};  // 64 bits 2^64
    std::cout << sizeof(looooonnngInt) << std::endl;

    float pi {3.14};  // 32 bits 2^32
    std::cout << sizeof(pi) << std::endl;

    double e {-2.273123};  // 64 bits 2^64
    std::cout << sizeof(e) << std::endl;

    long double bigNumber {37.23489748937492873};  // 64 bits 2^64
    std::cout << sizeof(bigNumber) << std::endl;

    std::cout << sizeof(birthday) << std::endl;

    return 0; 
}