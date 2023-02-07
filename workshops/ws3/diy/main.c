//***********************************************************************//
// IPC Workshop 3 p2: tester program
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//Xinyang Wu   2023 Feb 6th  Email:xwu159@myseneca.ca, Seneca Student ID:153821228/
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.*/
//***********************************************************************//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getInt(void);
int getIntMM(int min, int max);
double getDouble(void);
double getDoubleMM(double min, double max);
void line(char fill, int len);

int main(void) {
    int value;
    double dvalue;
    printf("Enter an integer value: ");
    value = getInt();
    printf("You entered: %d\n", value);
    line('*', 50);
    //********************************************
    printf("Enter an integer value between 10 and 20 inclusive: ");
    value = getIntMM(10, 20);
    printf("You entered: %d\n", value);
    line('*', 50);
    //********************************************
    printf("Enter a double value: ");
    dvalue = getDouble();
    printf("You entered: %.2lf\n", dvalue);
    line('*', 50);
    //********************************************
    printf("Enter a double value between 10.1 and 20.1 inclusive: ");
    dvalue = getDoubleMM(10.1, 20.1);
    printf("You entered: %.2lf\n", dvalue);
    line('*', 50);
    //********************************************
    return 0;
}