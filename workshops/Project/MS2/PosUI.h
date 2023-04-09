#ifndef POS_UI_H
#define POS_UI_H
struct Item
{
	char SKU[MAX_SKU_LEN + 1];
	char name[61];
	double price;
	int taxed;
	int quantity;
};
int menu(void);
void runPos(const char filename[]);
double cost(const struct Item* item);
int LoadItems(const char filename[]);
void listItems(void);
void inventory(void);

#endif