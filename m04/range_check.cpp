#include <iostream>
using namespace std;
// we have shown 
// 1. how to express the range
// 2. check before looping (while loop)
// 3. check after looping (do-while loop)

// while loop is to have a sentinel gard the lopping

int main() {
    int number;
    cout << "Enter a number in the range 1-100: ";
    cin >> number;
    while (number < 1 || 100 < number) // out of range
    {
        cout << "ERROR: Enter a value in the range 1-100: ";
        cin >> number;
    } 
    
    cout << "Enter a number in the range 1-100: ";
    cin >> number;
    do
    {
        cout << "ERROR: Enter a value in the range 1-100: ";
        cin >> number;
    } while (number < 1 || 100 < number); // out of range
}