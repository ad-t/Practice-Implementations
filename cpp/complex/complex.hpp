#ifndef MY_COMPLEX_H
#define MY_COMPLEX_H

// dependencies
#include <iostream>

class Complex {
    public:
        Complex();
        Complex(double re, double im);
        ~Complex();
        Complex getConjugate();
        friend Complex operator+(const Complex a, const Complex b) {
            return Complex(a._re + b._re, a._im + b._im);
        }
        friend Complex operator-(const Complex a, const Complex b) {
            return Complex(a._re - b._re, a._im - b._im);
        }
        friend std::ostream& operator<<(std::ostream& os,  Complex a) {
            os << a._re << " + " << a._im << "i";
            return os;
        }

    private:
        double _re;
        double _im;
};

#endif // MY_COMPLEX_H
