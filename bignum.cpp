#include "bignum.h"

//return size of the Bignum 
int Bignum::size() const {
  return ndigits;
}

//default constructor
Bignum::Bignum() {
  ndigits=1;
  for(int i=0;i<ndigits;i++) {
    digits[i]=0;
  }
}

Bignum::Bignum(int a) {
  ndigits=a; 
  for(int i=0;i<ndigits;i++) {
    digits[i]=0;
  }
}

Bignum::Bignum(std::string a) {
  ndigits=static_cast<int>(a.length());
  for(int i=1;i<=ndigits;i++) {
    digits[i-1]=static_cast<int>(a[ndigits-i])-48;
  }
  //for(std::string::iterator it=a.begin(); it!=a.end(); it++) {

    
}

//Bignum operator+(const Bignum& a) {

/* overload subscript operator access specific digits
note that is it int& why?  
http://www.learncpp.com/cpp-tutorial/98-overloading-the-subscript-operator/ 
*/
int& Bignum::operator[](const int index) {
    assert(index>=0 && index<=ndigits);
    return digits[index-1];

}

//print out the number 
std::ostream& operator<<(std::ostream& os, Bignum& a) { 
  for(int i=a.ndigits;i>0;i--) {
   os << a[i];
   // os << a.digits[i-1];
  }
  return os;
}
