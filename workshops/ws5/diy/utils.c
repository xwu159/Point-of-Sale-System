/***********************************************************************
// IPC Workshop 5 p2: utils module
//
// File	utils.c
// Author  Fardad Soleimanloo
// Description
//
// this is the utils module developed in class on Feb 7th 2023
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//Xinyang Wu	Feb 18,2023   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
/////////////////////////////////////////////////////////////////
***********************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
int getMMInt(int min, int max, const char valueName[]){
    int value;
    value = getInt();
    while (value<min || value>max) { 
        printf("[%d<=%s<=%d], try again: ",min,valueName,max); 
        value= getInt();
    }
    return value;
    putchar('\n');
}



int yes(void) {
    int res;
    char resp;
    printf("(Y)es or (N)o: ");
    resp = getSingleChar();
    if (resp == 'Y' || resp == 'y') {
        res = 1;
    }
    else {
        res = 0;
    }
    return res;
}

char getSingleChar(void) {
    char ch = getchar();
    flushKey();
    return ch;
}

int getInt(void) {
    int value;
    int done = 0;
    while (!done) {
        if (scanf("%d", &value) == 1)
        {
            done = 1;
        }
        else {
            flushKey();
            printf("Invalid Integer, try again: ");
        }
    }
    flushKey();
    return value;
}

void flushKey(void) {
    char ch = 'x';
    while (ch != '\n') {
        ch = getchar();
    }
}