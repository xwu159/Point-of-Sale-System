/*Name:Xinyang Wu, Email:xwu159@myseneca.ca, Seneca Student ID:153821228, date:2023 January 29th*/

/*I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.*/

#include<stdio.h>
void rectangle(char leftTop, char top, char topRight,
    char right, char rightButtom, char buttom,
    char buttomLeft, char left, char fill,
    int width, int height);

int main(void) {
    rectangle('+', '-', '+', '|', '+', '-', '+', '|', ' ', 20, 8);
    rectangle('/', '-', '\\', '|', '/', '-', '\\', '|', 'X', 50, 14);
    return 0;
}

