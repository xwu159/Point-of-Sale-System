/***********************************************************************
// IPC Workshop 3 p1: tester program
//
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
// This file will be replaced by another tester program during the submission
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
// Xinyang Wu     2023 Feb 2nd    Email:xwu159@myseneca.ca   Seneca Student ID:153821228
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
/////////////////////////////////////////////////////////////////
***********************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void prnGrade(int mark);
int getAverage(int NumberOfStudents);
int getNoOfStudents(void);
void printReport(int NumberOfStudents, int average);
int main(void) {
	int num;
	int average;
	printf("Class test marks report program...\n\n");
	num = getNoOfStudents();
	average = getAverage(num);
	printReport(num, average);
	return 0;
}