#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "classList.h"
void reportHeader(char subjectName[]) {
   putchar('\n');
   printf(" SUBJECT MARKS REPORT!\n");
   printf(" +-------------------+\n");
   printf(" | %-18s|\n", subjectName);
   printf(" +---+--------+------+\n");
   printf(" |Row| Std No | mark |\n");
   printf(" +---+--------+------+\n");
}
void report(int noOfStudents,int studentNumbers[], int marks[], char subjectName[]) {
   int counter = 0, sum = 0, ave, low = 100, high = 0;

   reportHeader(subjectName);

   for(counter = 0; counter < noOfStudents; counter++) {
      printf(" | %d | %06d | %4d |\n", counter + 1, studentNumbers[counter], marks[counter]);
      sum += marks[counter];
      if(marks[counter] > high) { high = marks[counter]; }
      if(marks[counter] < low) { low = marks[counter]; }
   }
   ave = sum / noOfStudents;
   printf(" +---+--------+------+\n");
   printf(" | %-11s|%5d |\n", "Average", ave);
   printf(" | %-11s|%5d |\n", "Highest", high);
   printf(" | %-11s|%5d |\n", "Lowest", low);
   printf(" +------------+------+\n");
}

void getStudentInfo(int noOfStudents, int studentNumbers[], int marks[]) {
   int counter = 0;
   while(counter < noOfStudents) {
      printf("%d of %d:\nStudent Number: ", counter + 1, noOfStudents);
      studentNumbers[counter] = getMMInt(9999, 1000000, "Student Number");
      printf("Mark: ");
      marks[counter] = getMMInt(0, 100, "Mark");
      counter++;
   }

}

int getSubjectInfo(char subjectName[]) {
   int noOfStudents;
   printf("Enter subject Name: ");
   scanf("%s", subjectName);
   printf("Enter Number of students (max 50): ");
   noOfStudents = getMMInt(1, 50, "Number of students");
   printf("Please enter %d student marks:\n", noOfStudents);
}


void subjectMarksReport(void){
    int noOfStudents;
    int studentNumbers[50];
    int marks[50];
    char subjectName[10];
    noOfStudents = getSubjectInfo(subjectName);
    getStudentInfo(noOfStudents, studentNumbers, marks);
    report(noOfStudents, studentNumbers, marks, subjectMarksReport);
}