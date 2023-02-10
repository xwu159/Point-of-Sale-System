//***********************************************************************//
// IPC Workshop 4 p1: tester program
//
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
// This file may be replaced by another tester program during the submission
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//Xinyang Wu     2023 Feb 9th    Email:xwu159@myseneca.ca   Seneca Student ID:153821228
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
/////////////////////////////////////////////////////////////////
//***********************************************************************//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "rental.h"
int main(void) {
    printf("Welcome to Seneca Ski Equipment Rentals...\n"
        "------------------------------------------\n");
    do {
        rental();
        printf("Exit Program? ");
    } while (!yes());
    return 0;
}