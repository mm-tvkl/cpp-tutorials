#include <iostream>
#include <string>
#include <cstdint> // uint_8 , ...
#include <iomanip>
#include <cmath>
#include <bitset> // for bitset
#include <random>
#include <iterator>
// #include "add.h"

// using namespace std;

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

    // cout << add(10, 11) << '\n';
    // cout << multipliction(10, 11) << '\n';
    // cout << substract(10, 11) << '\n';

    //! Integer
    //* short a = 10;
    //* int b = 20;
    //* long c = 10;
    //* long long d = 20;

    //* unsigned short a = 10;
    //* unsigned int b = 20;
    //* unsigned long c = 10;
    //* unsigned long long d = 20;

    //! Floating point
    // float
    // double
    // long double
    // cout << setprecision(10);
    // cout << 123456.7891011 << '\n';
    // cout << 123456.7891011 << '\n';
    // cout << 123456.7891011 << '\n';

    // float a{0.2};
    // float b{0.1};
    // float c{0.3};

    // cout << (a + b == c);
    
    //! Boolean
    // bool isExist1{true};
    // bool isExist2{false};

    // cout << boolalpha;
    // cin >> boolalpha;

    // cout << isExist1 << '\n';
    // cout << isExist2 << '\n';

    // true -> 1
    // false -> 0

    // const int x{10};
    // constexpr double GRAVITY {9.8};

    // int userNumber{};
    // cout << "Enter a number: ";
    // cin >> userNumber;

    // if (userNumber % 2 == 0){
    //     cout << "Your number is even!";
    // } else {
    //     cout << "Your number is odd!";
    // }

    // cout << 5 % -2;

    // cout << pow(2,4); // 16

    // std::bitset<8> myBitset {0b00000101};
    
    // std::cout << myBitset << '\n';
    // std::cout << myBitset.test(2) << '\n';
    
    // myBitset.set(1);
    // myBitset.flip(3);
    // myBitset.reset(2);

    // std::cout << myBitset << '\n';

    //! Bit masks

    // constexpr std::bitset<8> mask0 {0b0000'0001};
    // constexpr std::bitset<8> mask1 {0b0000'0010};
    // constexpr std::bitset<8> mask2 {0b0000'0100};
    // constexpr std::bitset<8> mask3 {0b0000'1000};
    // constexpr std::bitset<8> mask4 {0b0001'0000};
    // constexpr std::bitset<8> mask5 {0b0010'0000};
    // constexpr std::bitset<8> mask6 {0b0100'0000};
    // constexpr std::bitset<8> mask7 {0b1000'0000};

    // std::bitset<8> flag {0b0000'0101};

    //* .test()
    // std::cout << "Bit 1: " << ((flag & mask0) ? "ON\n" : "OFF\n");
    // std::cout << "Bit 2: " << ((flag & mask1) ? "ON\n" : "OFF\n");
    // std::cout << "Bit 3: " << ((flag & mask2) ? "ON\n" : "OFF\n");
    // std::cout << "Bit 4: " << ((flag & mask3) ? "ON\n" : "OFF\n");

    //* .set()
    // std::cout << "Bit 2 before: " << ((flag & mask1) ? "ON\n" : "OFF\n");
    // flag |= mask1;
    // std:: cout << flag;
    // std::cout << "Bit 2 after: " << ((flag & mask1) ? "ON\n" : "OFF\n");

    //* .reset()
    // flag |= mask4;
    // std::cout << "Bit 5 before: " << ((flag & mask4) ? "ON\n" : "OFF\n");
    // flag &= ~mask4;
    // std::cout << "Bit 5 after: " << ((flag & mask4) ? "ON\n" : "OFF\n");

    //* .flip()
    // std::cout << "Bit 5 step1: " << ((flag & mask4) ? "ON\n" : "OFF\n");
    // flag ^= mask4;
    // std::cout << "Bit 5 step2: " << ((flag & mask4) ? "ON\n" : "OFF\n");
    // flag ^= mask4;
    // std::cout << "Bit 5 step3: " << ((flag & mask4) ? "ON\n" : "OFF\n");

    //! Control Flow
    // 1- Coditional statement
    // 2- Jumps
    // 3- Function calls
    // 4- Loops
    // 5- Hults
    // 6- Ecceptions

    // std::mt19937 mt;
    // std::uniform_int_distribution die6 {1, 6};

    // for(int i{0} ; i < 100 ; i++){
        
    //     std::cout << die6(mt) << '\t';
    //     if(i % 10 == 0){
    //         std::cout << '\n';
    //     }
    // }

    // int scores[5]{15, 2, 14, 19, 9};

    // int numberOfStudent { static_cast<int>(std::size(scores)) };

    // int biggestScore{};

    // for (int i{0}; i < numberOfStudent; i++){
    //     if(biggestScore <= scores[i]){
    //         biggestScore = scores[i];
    //     }
    // }

    // std::cout << "The score of rank 1 is: " << biggestScore;

    return 0;
}