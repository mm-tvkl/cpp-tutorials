#include <iostream>
#include <string>
#include "add.h"

using namespace std;

// void printHi(string name){
//     cout << "Hello " << name;
// }

int main (void){
    
    // int a;       // Defualt initialization
    // int b = 5;   // Copy initialization
    // int c ( 5 ); // Direct initialization
    // int d { 5 }; // Uniform initialization

    // printHi("Mahdi");

    // Definition => Writing main structure
    // Declaration => Hey Compilerrrr !!!

    cout << add(10, 11) << '\n';
    cout << multipliction(10, 11) << '\n';
    cout << substract(10, 11) << '\n';

    return 0;
}