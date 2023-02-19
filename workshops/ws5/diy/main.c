
/***********************************************************************
// IPC Workshop 5 p2: tester program
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
//Xinyang Wu    Feb 18th, 2023    I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
/////////////////////////////////////////////////////////////////
***********************************************************************/
#include <stdio.h>
#include "classList.h"
#include "utils.h"
int main(void){
    int i;
    printf("Subject Performance report\n");
    printf("-------------------------\n");
    do {
        subjectMarksReport();
        printf(" Exit? ");
    } while (!yes());
    return 0;
}