// Lab02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
Quadratic Equation
This program solves AX + B = 0 for X
To do so we need to convert the equation first
Since AX + B = 0. . .
    AX = -B
    X = -B/A
Note that A *cannot* be 0 or we end up with division by 0 which is undefined

Written by Jeffrey Kesselman
1/6/2022
*/
int main()
{
    float A; //a place to store A value
    float B; //a place to store B value
    float X; //a place to store X value

    //input A & B
    do { //a do loop because we want to check value after input
         //a while {} here would require us to preset A to a non zero value
        std::cout << "Input a non-zero value for A: ";
        std::cin >> A;

    } while (A == 0); // if A is zero, its not valid so do it again

    std::cout << "Input any value for B: "; //B can safely be zero
    std::cin >> B;
    X = -B / A; //find X
    std::cout << "X is " << X << std::endl; // << can be chained for multiple values, std::endl makes a new line
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
