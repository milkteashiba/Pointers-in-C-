// pointerpractice.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

// using a whole library called std
// think of namespace as huge library of code 
// similar to "import math" in java. c# uses "using" as well
using namespace std;

// declaring "subroutine" as a void function, 
// returns nothing but will take any "int" as a parameter

void subroutine(int);

// there's always a "main" function
int main()
{
    // calling it twice gives 2 addresses
    subroutine(10);
    subroutine(8);
    // makes sure code runs successfully
    return 0;
}

// as long as data type matches (int)
// int can be called whatever (not just y)
void subroutine(int y) {
    // saying x = y value EXACTLY
    int x = y;
    // declaring ip as a pointer to int (*)
    // "ip" is now POINTING to int, but currently garbage data
    int* ip;
    // NO LONGER GARBAGE DATA 
    // because ip is integer pointer (now defined), 
    // pointing to the address that "x" is sitting at
    // *reminder: "address" is located in RAM 
    ip = &x;
    
    // cout = "console out" 
    // "endl" = end line (usually* in c++ documentation)
    // "<<" = assign/push into memory
    // think of it as pushing the String into console out
    cout << "Value of x is : ";
    cout << x << endl;
    cout << "Value of ip is : ";
    cout << ip << endl;
    cout << "Value is *ip is : ";
    cout << *ip << endl;
}

