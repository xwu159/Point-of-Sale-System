/***********************************************************************
// IPC Workshop 3 p1: tester program
//
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
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

void prnGrade(int mark) {
	if (mark < 50) { printf("F"); 
	}else if(mark>=50&&mark<55) { printf("D"); 
	}else if (mark >= 55 && mark < 60) { printf("D+");
	}else if (mark >= 60 && mark < 65) { printf("C");
	}else if (mark >= 65 && mark < 70) { printf("C+");
	}else if (mark >= 70 && mark < 75) { printf("B");
	}else if (mark >= 75 && mark < 80) { printf("B+"); 
	}else if (mark >= 80 && mark < 90) { printf("A"); 
	}else if (mark >= 90 && mark <=100) { printf("A+"); 
	}
}
int getNoOfStudents(void) {
	int NumberOfStudents;
		printf("Please enter the number of students: ");
		scanf("%d", &NumberOfStudents);
		return NumberOfStudents;
}

int getAverage(int NumberOfStudents) {
	int counter=0;
	int mark;
	int sum=0;
	printf("Enter %d student marks...\n",NumberOfStudents);
	while (counter < NumberOfStudents){
		printf("%d> ",counter+1);
		scanf("%d",&mark);
		if (mark < 0) {printf("Invalid Mark, values should be greater than or equal 0.\n");
		}else if(mark>100){printf("Invalid Mark, values should be less than or equal to 100.\n");
		}else { 
			counter++;
			sum += mark;
		}
	}
	return sum/NumberOfStudents;
}

void printReport(int NumberOfStudents, int average)
{
	printf("Number of students: %d\nClass average: %d%% (", NumberOfStudents, average);
	prnGrade(average);
	printf(")");
}
