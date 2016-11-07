#include <iostream>
using namespace std;
int main (int argc, char * argv[]) {
    if (!0) {
        cout << "!0 evaluates to true" << endl;
    }
    if (!(!6)) {
        cout << "!6 evaluates to false" << endl;
    }
    if (6) {
        cout << "6 evaluates to true" << endl;
    }
    if (-4) {
        cout << "-4 evaluates to true" << endl;
    }
    if (0.0) {
        cout << "0.0 evaluates to true" << endl;
    }
    return 0;
}
