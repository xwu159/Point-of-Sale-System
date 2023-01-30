/*Name:Xinyang Wu, Email:xwu159@myseneca.ca, Seneca Student ID:153821228, date:2023 January 29th*/

/*I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.*/

#include<stdio.h>
void rectangle(char leftTop, char top, char topRight,
    char right, char rightButtom, char buttom,
    char buttomLeft, char left, char fill,
    int width, int height) {
    int collum1 = 0;
    int collum3 = 0;
    int row = 0;

    printf("%c", leftTop);
    while (collum1 < width - 2) {
        printf("%c", top);
        collum1++;
    }
    printf("%c\n", topRight);

    while (row < height - 2) 
    {
        printf("%c", left);
        int collum2 = 0;
        while (collum2 < width - 2) 
        {
            printf("%c", fill);
            collum2++;
        }
        row++;
        printf("%c\n", right);
    }
    
    printf("%c", buttomLeft);
    while (collum3 < width - 2) {
        printf("%c", buttom);
        collum3++;
    }
    printf("%c\n", rightButtom);
}

