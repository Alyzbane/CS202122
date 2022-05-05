#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *inputString(FILE* fp, size_t size);
void redundant(char *str);
int compare_char (const void *a, const void *b) ;

int main()
{
   int oldLen, newLen;
   char *strInp;

   //get the string using a function
   strInp = inputString(stdin, 10); //10 is initial size of string

   oldLen = strlen(strInp); //old length of input string
   printf("%s has a lenght of %d.", strInp, oldLen);

   char oldStr[(int) strlen(strInp)];
   strcpy(oldStr, strInp);//copy the string into newstring
    oldStr[oldLen + 1] = '\0';
   

   if (oldLen % 2 == 0 )
   {
      printf("\nThe Number (%d) is Unhappy Number or Sad Number.\n", oldLen);
      qsort (strInp, oldLen, sizeof *strInp, compare_char);
      printf("%s sorted is %s.", oldStr, strInp);
   }
   else
   {    redundant(strInp);
        newLen = strlen(strInp); //new length of string after function call
        printf("\nThe Number (%d) is Happy Number.", oldLen);
        
        if(oldLen == newLen)
            printf("\n%s has no duplicate string.", oldStr);
        else
            printf("\n%s has a duplicate string and becomes %s.", oldStr, strInp);    
   }

}

void redundant(char *str)
{
    int check=0;
    int i,j;
    char ch;

    while(str[check]) 
    {
        ch = str[check];
        i = j = check + 1;

        while(str[i]) 
        {
            if(str[i] != ch) 
            {
                str[j] = str[i];
                j++; 
            }

            i++; 
        }

        str[j]='\0';
        check++;
    }
}

//function for getting the string dynamically allocated of its size
char *inputString(FILE* fp, size_t size)
{
//The size is extended by the input with the value of the provisional
    char *str;
    int ch;
    size_t len = 0;
    str = realloc(NULL, sizeof(*str) * size);//size is start size
    if(!str) return str;
    while(EOF != (ch = fgetc(fp)) && ch != '\n')
    {
        str[len++]=ch;
        if(len==size)
        {
            str = realloc(str, sizeof(*str)*(size+=16));
            if(!str) return str;
        }
    }
    str[len++]='\0';

    return realloc(str, sizeof(*str)*len);
}

//qsort simple compare
int compare_char (const void *a, const void *b) 
{
    if (*(char *)a != *(char *)b)
        return *(char *)a - *(char *)b;

    return 0;
}