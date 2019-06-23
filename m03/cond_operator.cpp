#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Enter a number: ";
    cin >> i;
    if(i>3) cout << "\nok";
    else cout << "\ntoo small";
    // using conditional operator
    cout << ( (i>3) 
                ? "\nok" 
                : "\ntoo small"
            );
    // single line short hand 
    // cout << ((i>3)? "\nok" : "\ntoo small");
    
}