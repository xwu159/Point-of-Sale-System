#ifndef POS_UI_H
#define POS_UI_H

int menu(void);
void runPos(const char filename[]);
double cost(const struct Item* item);
int LoadItems(const char filename[]);
void listItems(void);
void inventory(void);

#endif