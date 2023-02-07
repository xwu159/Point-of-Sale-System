//*Name:Xinyang Wu, Email:xwu159@myseneca.ca, Seneca Student ID:153821228, date:2023 Feb 6th*/

/*I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void flushKey() {
    char ch = 'x';
    while (ch != '\n') {
        ch = getchar();
    }
}

int getInt() {
    int value;
    char test;
    int done = 0;
    while (!done) {
        if (scanf("%d%c", &value, &test) == 2) {
            if (test == '\n') {
                done = 1;
            }
            else {
                flushKey();
                printf("Enter only an integer, try again: ");
            }
        }
        else {
            flushKey();
            printf("Invalid Integer, try again: ");
            
        }
    }
    return value;
}

int getIntMM(int min, int max) {
    int value;
    char test;
    int done = 0;
    while (!done) {
        if (scanf("%d%c", &value, &test) == 2) {
            if (test == '\n') {
            if (value > max || value < min) { printf("[%d<=Number<=%d], try again: ",min,max); }
            else { done = 1; }
            }
            else {
                flushKey();
                printf("Enter only an integer, try again: ");
            }
        }
        else {
            flushKey();
            printf("Invalid Integer, try again: ");

        }
}
    return value;
}

double getDouble(void) {
    double value;
    char test;
    int done = 0;
    while (!done) {
        if (scanf("%lf%c", &value, &test) == 2) {
            if (test == '\n') {
                done = 1;
            }
            else {
                flushKey();
                printf("Enter only a Double, try again: ");
            }
        }
        else {
            flushKey();
            printf("Invalid Double, try again: ");

        }
    }
    return value;

}

double getDoubleMM(double min, double max) {
    double value;
    char test;
    int done = 0;
    while (!done) {
        if (scanf("%lf%c", &value, &test) == 2) {
            if (test == '\n') {
                if (value > max || value < min) { printf("[%.3lf<=Number<=%.3lf], try again: ", min, max); }
                else { done = 1; }
            }
            else {
                flushKey();
                printf("Enter only a Double, try again: ");
            }
        }
        else {
            flushKey();
            printf("Invalid Double, try again: ");

        }
    }
    return value;

}

void line(char fill, int len) {
    int i = 0;
    while (i < len) {
        printf("%c", fill);
        i++;
    }
    printf("\n");
}






