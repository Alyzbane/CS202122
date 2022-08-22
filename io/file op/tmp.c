#include <stdio.h>

int main(int argc, char *argv[])
{
    //all func present returns NULL if it fails
    FILE **fp, *tmp;

    //L_tmpnam = macro to match the len of char in tmp file name
    char file[L_tmpnam];
    
    //create a tmp file in "wb+" mode (binary)
    //FILE *tmpfile(void)
    tmp = tmpfile();

    if (tmp == NULL)
        printf("Error\n");    

    fp = &tmp;
    printf("Filename: %s\n", *fp);
    
    //if given a null it stores filename in *var
    //char *tmpnam (char *s)
//    file = tmpnam(NULL);

    //return a pointer to the first character of the array
    tmpnam(file);
    printf("Filename: %s\n", file);
    printf("Max tmp files in execution: %d\n",TMP_MAX);
    
    return 0;
}
