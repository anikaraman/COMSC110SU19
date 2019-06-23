#include <iostream>
using namespace std;

int main() {
    int gpa;
    cout << "Enter grade: ";
    cin >> gpa;
    
    cout << "For student with " << gpa << " gpa, the award is\n";
    
    if (gpa >= 4.0) cout << "$500\n";
    if (gpa >= 3.5) cout << "$200\n";
    if (gpa >= 3.0) cout << "$50\n";
}