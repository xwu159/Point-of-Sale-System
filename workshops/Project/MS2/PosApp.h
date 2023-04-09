// -----------------------------------------------------------
// Name            Date            Email                   ID
//Xinyang Wu    Aprith,2023    xwu159@myseneca.ca   153821228
//I have done all the coding by myself and only copied the code
//that my professor provided to complete my project milestones.
/////////////////////////////////////////////////////////////////
* **********************************************************************/ #ifndef SDDS_POSAPP_H
#define SDDS_POSAPP_H

struct Item
{
	char SKU[MAX_SKU_LEN+1];
	char name[61];
	double price;
	int taxed;
	int quantity;
}; 
extern struct Item items[MAX_NO_ITEMS];
extern int noOfItems;
void start(const char* action);
void inventory(void);
void addItem(void);
void removeItem(void);
void stockItem(void);
void POS(void);
int LoadItems(const char filename[]);
void saveItems(const char filename[]);

#endif
