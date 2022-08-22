#include <stdio.h>
#include <string.h>

#define PRINT_INT(x) printf(#x ": \t%d\n", x) 
#define PRINT_STR(s) printf(#s " : \t%s\n", s)
#define TITLE_LEN 20
#define AUTHOR_LEN 25
#define DESIGN_LEN 20

struct catalog_item {
	int stock_num;
	double price;
	int item_type;
	//union nested inside the struct
	union {
		//struct as member of union
		struct {
			char title [TITLE_LEN+1];
			char author [AUTHOR_LEN+1];
			int pages;
		}book;	
		struct {
			//union with > 1 structs inside with the same member name (match) valid as it is
			//will share the same value if one of them are assign values
			char design[DESIGN_LEN+1];
		}mug;
		struct {
			char design[DESIGN_LEN+1];
			int colors;
			int sizes;
		}shirt;
	}item;
}s;
int main()
{
	strcpy(s.item.mug.design, "Mug design");	

	printf("mug.design = shirt.design\n\n");

	PRINT_STR(s.item.mug.design);
	PRINT_STR(s.item.shirt.design); //walang assign pero meron
	s.item.shirt.sizes = 54;
	s.item.shirt.colors = 1111; 

	s.item.book.pages = 1000;
	PRINT_INT(s.item.book.pages);
	PRINT_INT(s.item.shirt.sizes);
	PRINT_INT(s.item.shirt.colors);

	return 0;
}
