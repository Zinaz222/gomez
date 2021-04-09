/*
 * Name: Sinan Bayati
 * Date: 4/6/2021
 * HW Number: 7
 * ID: 01129570
 */

#ifndef BigInt_h
#define BigInt_h

#include <stdint.h>
#include <stdbool.h>
#include <string>
#include <vector>
#include <ostream>

class BigInt
{
public:
    BigInt(const std::vector<uint8_t> &v);
    BigInt(const std::vector<int> &v);
    BigInt(const std::vector<char> &v);
    BigInt(const char *c, uint64_t len);
    ~BigInt() = default;


    
    friend bool operator==(const BigInt& b1, const BigInt& b2);
    friend bool operator!=(const BigInt& b1, const BigInt& b2);
    friend bool operator>=(const BigInt& b1, const BigInt& b2);
    friend bool operator>(const BigInt& b1, const BigInt& b2);
    friend bool operator<=(const BigInt& b1, const BigInt& b2);
    friend bool operator<(const BigInt& b1, const BigInt& b2);
    friend BigInt operator+(const BigInt& b1, const BigInt& b2);
    friend BigInt operator-(const BigInt& b1, const BigInt& b2);
    friend BigInt operator*(const BigInt& b1, const BigInt& b2);
    friend std::ostream& operator<<(std::ostream& os, const BigInt& dt);
    std::vector<uint8_t> num;

    BigInt& operator++(); // prefix
    BigInt operator++(int); // postfix
    BigInt& operator--(); // prefix
    BigInt operator--(int); // postfix
private:


    
    int negative = 0; //flag, we use xor ^ here for answer sign
    

};


#endif