#include "complex.hpp"

Complex::Complex() {
    this->_re = 0;
    this->_im = 0;
}

Complex::Complex(double re, double im) {
    this->_re = re;
    this->_im = im;
}

Complex Complex::getConjugate() {
    return Complex(this->_re, -1 * this->_im);
}

Complex::~Complex() {}
