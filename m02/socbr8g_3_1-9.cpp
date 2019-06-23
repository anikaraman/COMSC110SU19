#include <iostream>
#include <iomanip>
#include <stdio.h> 
#include <string.h>
using namespace std;

int main() {
    int length, width, height;
    cin.get(length, width, height);
    cout << length << "  "
         << width << "   "
         << height;
}