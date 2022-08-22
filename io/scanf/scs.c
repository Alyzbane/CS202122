#include <stdio.h>
#include <string.h>


int find_int (const char *filename);

int main()
{
    int n;
    FILE *file;

    //printf("The character: ");
   // n = scanf("%*c", a); //type the same scanf statements
                            //to consume the input
    
   // printf("%d characters consumed: %c", n, a[0]);
    //add (space) after input
    //since white space characters 
    //are not consumed by the following:
    //%[ , %c , %n
  //  n = scanf(" %[^\n]", &a[1]);

//    fprintf(file, "\nInput: %d\n"
 //          "Finale count %d: %s", n, strlen(a), a);
    n = find_int("out.txt");

    printf("Input read: %d\n", n);

    return 0;
}

int find_int (const char *filename)
{
    printf("In this function\n");
    FILE *fp = fopen(filename, "r"); //reading the file
    int n, c;

    if (fp == NULL)
    {
        printf("File does not exist\n");
        return -1; 
    }

    printf("Reading now the file for int\n");
    //reading a matching input in file
    while ((n = fscanf(fp, "%d", &c)) != 1) //if 0 || n > 1 error
        //try using ==
    {
        printf("Inside the reading int: %d\n", n);
        if(ferror(fp))  // the file has matching error input
        {
         printf("Error indicator set\n");
         fclose(fp);
         return -2;
        }
        if(feof(fp))   // the file has reached the EOF
        {
         printf("EOF indicator set\n");
         fclose(fp);
         return -3;
        }
        printf("Inside file: %d\n", c);
        fscanf(fp, "%*[\n]"); //skip the whitespace for loop to start 
    }
    fclose(fp);
    return n; //returning the input read in file before error
}
