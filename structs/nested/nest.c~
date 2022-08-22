//nested structs
#include <stdio.h>

#define LEN 20
#define PRINT_STR(x) printf(#x " %s\n", x)

struct st_name
{
	char first[LEN+1];
	char middle_init;
	char last[LEN+1];
};

struct identity
{
	struct st_name name; //declare var name in struct st_name inside this struct
	int id, age;
	char sex;
}student1, student2;

void dsp_name (struct st_name content);
void cat(char *st1, const char *st2);
void replace_content (struct st_name content, int n);

int main()
{
	cat(&student1.name.middle_init, "D");
	cat(student1.name.first, "Alyzbane");
	cat(student1.name.last, "Hydemary");

	dsp_name(student1.name); //kunin yung content ng student1 name galing sa declared variable name in struct st_nam
	
	//copying original variable struct member definitions to the nested struct variable
	struct st_name new_name; //declare struct var local to the main
	cat(new_name.first, "Hello, World"); //put definitions	
	student2.name = new_name; //copy the original var in nested var of struct	

	dsp_name(student2.name);	
	return 0;
}

//copy string inputs in st1 from st2
void cat(char *st1, const char *st2)
{
	while((*st1++ = *st2++))
		;
}

/* change it into getchar() bukas :
void replace_content (struct st_name content, int n)
{
		
	switch(n)
	{
	case 1: 
		  scanf("%s", content.first);
		  break;
	case 2:   
		  scanf("%c", &content.middle_init);
		  break;
	case 3:   
		  scanf("%s", content.last);
		  break;
	case 4:   
		  scanf("%s%c%s", content.first, &content.middle_init, content.last);
		  break;
	default:  
		  printf("ERROR: CHOOSE 1, 2, 3, 4");		
		  break;
	}

}*/
//display the content of stuct in st_name by accessing its variables from nested struct
void dsp_name (struct st_name content)
{
	PRINT_STR(content.first); 

	printf("%c\n", content.middle_init);

	PRINT_STR(content.last);	
}
