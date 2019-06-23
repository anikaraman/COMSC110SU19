#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    // The following statement: 
    cout << "Enter a long string: ";
    string str;
    cin >> setw(10) >> str; 
    //will read up to this many characters into str.
    cout << str;
    
    // cin.ignore();
    cin.clear();
    cout << "Enter a long string: ";
    char buffer[80];
    cin >> setw(10) >> buffer; 
    for (int i=0; buffer[i]!=NULL; )
        cout << buffer[i++];
}