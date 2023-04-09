/***********************************************************************
// IPC Project MS2 : tester program
//
// File	main.c
// Version 1.0
// Date Winter 2022
// Author  Fardad Soleimanloo
// Description
//
//  Add the code required as commented below
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Email                   ID
//Xinyang Wu    April 9th,2023    xwu159@myseneca.ca   153821228
//I have done all the coding by myself and only copied the code
//that my professor provided to complete my project milestones.
/////////////////////////////////////////////////////////////////
***********************************************************************/
#include <stdio.h>
#include "POS.h"
#include "PosUI.h"
#include "PosApp.h"
#include "utils.h"

struct Item items[MAX_NO_ITEMS];
int noOfItems;

int main() {
    runPos("posdata.csv");
    return 0;
}
