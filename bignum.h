#ifndef BIGNUM_H
#define BIGNUM_H
#include <iostream>
#include <cassert>
#include <string>

const int MAX_SIZE=100;

class Bignum{
  private:
    int ndigits;
    int digits[MAX_SIZE];

  public:
    Bignum();
    Bignum(int);
    Bignum(std::string);

    //return size
    int size() const;

    //overload subscript operator to get nth digit
    int& operator[](const int index) ;
    //declaring friend allows ostream to access private elements 
    friend std::ostream& operator<<(std::ostream& os, Bignum& a);
    
    //return Bignum with the last ld digits
    Bignum mod(int ld);
    Bignum operator+(const Bignum& a);
//    Bignum operator=(const Bignum& a);
 //   ~Bignum();
};

//ostream& operator<<(ostream& out, const Bignum& a);

#endif
