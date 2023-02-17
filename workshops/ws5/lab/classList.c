
/***********************************************************************
// IPC Workshop 5 p1: tester program
//
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
//  Implement the code required as commented below
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//Xinyang Wu     2023 Feb 16     I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
/////////////////////////////////////////////////////////////////
***********************************************************************/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "classList.h"
void printReport(const char subjectCode[], const int studentNumbers[],
    const int marks[], int noOfStudents) {
    int counter=0, sum=0,ave,low= marks[0], high= marks[0];
    printf("SUBJECT MARKS REPORT!\n");
    printf("  +---------------+\n");
    printf("  | %-14s|\n", subjectCode);
    printf("  +--------+------+\n");
    printf("  |%7s |%5s |  \n","Std No","mark");
    printf("  +--------+------+\n");
    for (counter = 0;  counter < noOfStudents;  counter++) {
        printf("  | %06d | %4d |\n", studentNumbers[counter], marks[counter]);
        sum += marks[counter];
        if (marks[counter] > high) { high = marks[counter]; }
        if (marks[counter] < low) { low = marks[counter]; }
    }
    ave = sum / noOfStudents;
    printf("  +--------+------+\n");
    printf("  |%-8s|%5d |\n","Average",ave);
    printf("  |%-8s|%5d |\n","Highest",high);
    printf("  |%-8s|%5d |\n","Lowest",low);
    printf("  +--------+------+\n");

}
