/***********************************************************************
// IPC Workshop 4 p2: tester program
//
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
// This file may be replaced by another tester program during the submission
// Do not change or modify this file in anyway at submission
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//Xinyang Wu    Feb 13th,2023    I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
/////////////////////////////////////////////////////////////////
***********************************************************************/
#include <stdio.h>
#include "calc.h"
#include "utils.h"
int main(void) {
    printf("My Simple Calculator\n"
        "-------------------------\n"
        "Available operations:\n"
        "Addition:       +\n"
        "Subtraction:    -\n"
        "Multiplication: x\n"
        "Division:       /\n"
        "Exponentiation: ^\n"
        "Modulus:        %%\n"
        "-------------------------\n"
        "Command Example:\n"
        "[Question mark][First Number][Operation][Second Number]<ENTER>\n"
        "?12.2+32<ENTER> << -- User input\n"
        "44.200 << -- Program response\n"
        "To exit press <ENTER> only\n"
        "-------------------------\n");

    while (calc());
    printf("Goodbye!\n");
    return 0;
}