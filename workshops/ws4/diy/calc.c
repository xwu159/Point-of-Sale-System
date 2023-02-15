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
#include "calc.h"
#include "utils.h"
int calc(void)
{
    char ch;
    int done = 0;
    while (!done)
    {
        printf("> ");
        ch = getchar();
        if (ch == '\n')
        {
            done = 1;
        }
        else if (ch != '?')
        {
            flushKey();
            printf("Invalid Command!\n[Question mark][First Number][Operation][Second Number] <ENTER>\n");
        }
        else
        {
            double num1;
            double num2;
            char operation;
            int len = 0;
            double result = 1.000;
            scanf("%lf%c%lf", &num1, &operation, &num2);
            flushKey();
            switch (operation)
            {
            case '+':
                len = printf("%.3lf\n", num1 + num2);
                line('-', len - 1);
                break;
            case '-':
                len = printf("%.3lf\n", num1 - num2);
                line('-', len - 1);
                break;
            case 'x':
                len = printf("%.3lf\n", num1 * num2);
                line('-', len - 1);
                break;
            case '/':
                if (num2 == 0) { printf("division by zero not allowed"); return 1; }
                len = printf("%.3lf\n", num1 / num2);
                line('-', len - 1);
                break;
            case '^':
                if (num2 != 0) {
                    int i;
                    for (i = 0; i < (long)num2; i++) { result *= num1; }
                }
                len = printf("%.3lf\n", result);
                line('-', len - 1);
                break;
            case '%':
                if (num2 == 0) { printf("division by zero not allowed"); return 1; }
                len = printf("%ld\n", (long)num1 % (long)num2);
                line('-', len - 1);
                break;
            default:
                printf("'%c' is not a valid operation, (only +,-,/,x,%% and ^ are acceptable)\n", operation);
            }
        }
    }
    return 0;
}