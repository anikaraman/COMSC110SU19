// A simple C++ program
//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	cout << "Enter an integer: ";
	int input;
	cin >> input;
	if(input > 10) 
	{
	    cout << "\nYou have entered: " << input;
	}
	else 
	{
	    cout << "\nToo small, enter another one: ";
	    int in;
	    cin >> in;
	    cout << "\nYou have entered " << in 
	         << " to replace " << input;
	}
	cout << in;
} 