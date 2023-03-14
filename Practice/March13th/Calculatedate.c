#include <stdio.h>
int main(){
	int year, month, date;
	int day=0,febday=0;
	printf("Please input year month day:\n");
	scanf_s("%d %d %d",&year,&month,&date);
	if ((year % 4 == 0 && year % 100 != 0) || (year%400 == 0))
	{
		febday = 29;
	}
	else { febday = 28; }

	switch (month)
	{
	case 1:
		day = date;
		break;
	case 2:
		day = 31+date;
		break;
	case 3:
		day = 31+febday+date;
		break;
	case 4:
		day = 31+31 + febday + date;
		break;
	case 5:
		day= 31+31+30+ febday + date;
		break;
	case 6:
		day = 31+31+30+31 + febday + date;
		break;
	case 7:
		day = 31+31+30+31+30 + febday + date;
		break;
	case 8:
		day = 31 + 31 + 30 + 31 + 30+31 + febday + date;
		break;
	case 9:
		day = 31 + 31 + 30 + 31 + 30 + 31 +31+ febday + date;
		break;
	case 10:
		day = 31 + 31 + 30 + 31 + 30 + 31 + 31 +30 + febday + date;
		break;
	case 11:
		day = 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 +31+ febday + date;
		break;
	case 12:
		day = 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30+febday + date;
		break;
	default:
		printf("The number you entered is not valid\n");
		break;
	}
	printf("%d %d %d is the %d of year %d",year,month,date,day,year);




return 0;
}
