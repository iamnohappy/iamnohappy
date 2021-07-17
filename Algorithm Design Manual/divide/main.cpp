#include <iostream>
#include <stdlib.h>

using namespace std;
int divide( int a, int b ) {
    if( abs(a) < abs(b) ) return 0;
    if( b == 1 ) return a;
    if( (a < 0 && b < 0) || (a>0&&b>0) ) {
        return 1 + divide(a - b, b);
    } else {
        return -(1 + divide(abs(a) - abs(b), abs(b)));
    }
}

int main() {
    cout << divide( -4, 10 ) << endl;

    return 0;
}
