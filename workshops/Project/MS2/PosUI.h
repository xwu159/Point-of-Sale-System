// -----------------------------------------------------------
// Name            Date            Email                   ID
//Xinyang Wu    Aprith,2023    xwu159@myseneca.ca   153821228
//I have done all the coding by myself and only copied the code
//that my professor provided to complete my project milestones.
/////////////////////////////////////////////////////////////////
* **********************************************************************/ #ifndef POS_UI_H
#define POS_UI_H

struct Item;
int menu(void);
void runPos(const char filename[]);
double cost(const struct Item* item);
int LoadItems(const char filename[]);
void listItems(void);
void inventory(void);

#endif