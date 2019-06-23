#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for(double d=0; d!=1; d+=0.1) {
        cout << fixed << setprecision(20) << d << endl;
        if( 1.2 < d ) break;
    }
        
    // double d = 0;
    // while( d != 1.0 ) {
    //     cout << "a ";
    //     d += 0.1;
    // }
}