#include<iostream>
using namespace std;

int main() {
    string input, buf[500];
    int empty_index=0;

    do {// get every line in (until EOF)
    
        getline(cin, input); // input a line
        buf[empty_index] = input;
        empty_index++;
        
    } while(input[0] != '0');
    
    // this will print out the last 3 lines
    cout << "The first empty line's index is " << empty_index << endl;
    for(int i=empty_index-3; i<empty_index; i++) 
        cout << i << ": " << buf[i] << endl;
        
    cout << "the above output is not correct, fix it!\n";
}