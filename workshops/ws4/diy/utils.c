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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

void flushKey(void) {
    char ch = 'x';
    while (ch != '\n') {
        ch = getchar();
    }
}
void line(char fill, int len) {
    int i;
    for (i = 0; i < len; i++) {
        putchar(fill);
    }
    if (len > 0) putchar('\n');
}
