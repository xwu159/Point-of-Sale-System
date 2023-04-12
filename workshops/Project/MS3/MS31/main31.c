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
//Xinyang Wu    April 11th,2023    xwu159@myseneca.ca   153821228
//I have done all the coding by myself and only copied the code
//that my professor provided to complete my project milestones.
/////////////////////////////////////////////////////////////////
***********************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "PosApp.h"
void fileDump(const char* filename);
int main() {
   fileDump("posdata.csv");
   loadItems("posdata.csv");
   saveItems("posdata_out.csv");
   fileDump("posdata_out.csv");
   return 0;
}

void fileDump(const char* filename) {
   FILE* fptr= fopen(filename, "r");
   if(fptr) {
      char ch=0;
      printf("Contents of file >>%s<<:\n",filename);
      while(fscanf(fptr, "%c", &ch) == 1) {
         putchar(ch);
      }
      fclose(fptr);
      printf("End of data in >>%s<<\n", filename);
   }
   else {
      printf("file: >>%s<< not found!\n", filename);
   }
}



