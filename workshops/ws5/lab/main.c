// fardad was here!!!
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
int main(void) {

	int counter=0;
	int noOfStudents;
	int mark[50];
	int stno[50];
	char subjectName;
	printf("Enter subject Name: ");
	scanf("%s",&subjectName);
	printf("Enter the number of students (max 50): ");
	scanf("%d", &noOfStudents);
	printf("Enter %d student numbers and student marks...\n",noOfStudents);
	
	while(counter < noOfStudents) { 
		printf("%d:\nStudent Number: ",counter+1);
		scanf("%d",&stno[counter]);
		printf("Mark: ");
		scanf("%d",&mark[counter]);
		counter++; }
	putchar('\n');
	printReport("IPC144ZAA", stno, mark, 4);
	return 0;
}
