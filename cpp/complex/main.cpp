#include <iostream>
#include <stdlib.h>

#include "complex.hpp"

using namespace std;

int main (int argc, char * argv[]) {
    Complex zero = Complex();
    Complex one = Complex(1, 5);
    Complex fraction = Complex(1.66666, 8.6546);
    cout << "Conjugate of " << one << " is " << one.getConjugate() << endl;
    cout << one << " plus " << fraction << " = " << one + fraction << endl;
    cout << fraction << " minus " << one << " = " << fraction - one << endl;
    cout << "Done!" << endl;
    return EXIT_SUCCESS;
}
