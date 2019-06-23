// The ch3 test bank Q 1-26
// test with entering 12 characters as in the following pattern:
// 0123456789012
#include <iostream>
#include <iomanip>
#include <stdio.h> // the following two headers are normally defaults
#include <string.h>
using namespace std;

int main() {
    char str[40];
    cin >> setw(10) >> str;
    cout << str;
    return 0;
}
