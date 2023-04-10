#ifndef SDDS_POSAPP_H
#define SDDS_POSAPP_H

extern struct Item items[MAX_NO_ITEMS];
extern int noOfItems;

struct Item
{
	char SKU[MAX_SKU_LEN+1];
	char name[61];
	double price;
	int taxed;
	int quantity;
}; 

void start(const char* action);
void inventory(void);
void addItem(void);
void removeItem(void);
void stockItem(void);
void POS(void);
int LoadItems(const char filename[]);
void saveItems(const char filename[]);

#endif
