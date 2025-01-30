#include <iostream>
#include <string>

using namespace std;

void printHi(string name){
    cout << "Hello " << name;
}

int main (void){
    
    // int a;       // Defualt initialization
    // int b = 5;   // Copy initialization
    // int c ( 5 ); // Direct initialization
    // int d { 5 }; // Uniform initialization

    printHi("Mahdi");

    return 0;
}