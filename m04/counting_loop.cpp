#include <iostream>
using namespace std;
// counting loop
int main() {
    // const int MAX = 10;
    int count = 0;
    while(count < 10) {
        cout << count++ << " ";
    }
    cout << endl;
    // reduce line# 6, 7, 9 to one line
    for(int index =0; index < 10; index ++)
        cout << index << " ";
}