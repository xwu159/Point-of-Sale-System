/***********************************************************************
// IPC Project MS3 : tester program
//
// File	main.c
// Version 1.0
// Date Winter 2023
// Author  Fardad Soleimanloo
// Description
//
//  Add the code required as commented below
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Email                   ID
//Xinyang Wu    April 13th,2023    xwu159@myseneca.ca   153821228
//I have done all the coding by myself and only copied the code
//that my professor provided to complete my project milestones.
/////////////////////////////////////////////////////////////////
***********************************************************************/
#include <stdio.h>
#include "PosApp.h"

int main() {
   int i;
   int foundIndex;
   loadItems("posdata.csv");
   for(i = 0; (foundIndex = search()) != -2;i++){
      if(foundIndex >= 0) {
         printf("SKU found at index %d\n", foundIndex);
      }
      else {
         printf("SKU not found!\n");
      }
   }
   printf("Search was executed %d times...", i);
   return 0;
}

