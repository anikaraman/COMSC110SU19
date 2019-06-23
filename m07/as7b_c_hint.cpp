#include<iostream>
using namespace std;

int main() {
    string input, buf[500];
    int empty_index=0;
    // get every line in until '0' ( as5 should be EOF)
    do {// get every line in (until EOF)
    
        getline(cin, input); // input a line
        buf[empty_index] = input;
        empty_index++;
        
    } while(input[0] != '0');
    
    for(int i=0; i<empty_index; i++) 
        cout << buf[i] << endl;
}