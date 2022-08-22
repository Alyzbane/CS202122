#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(void)
{
    //FILE * in stdio.h utilize the use of multiple streams for i/o
    //fopen func can change how file buffe, del a file ,rename a file
    
    //FILE *fopen (const char *restrict filename, eg. "\\drivepath" 
    //             const char *restrict mode); eg. "r","w" read, wirte
    
    //kung binary files just add b before the char eg. rb, w+b, a+b
    //r = read
    //w = write(kahit wala yung file) overwite the file
    //a = appending file (same as w)
    //r+ = read and write sa simula
    //w+ = read and write (truncate kung may file) overwite the file
    //a+ = read and write (append kung may file)
    FILE *fp = fopen("out.txt", "wb");
    

    //test if fp will return NULL * if fopen has no value
    if (fp == NULL) 
        printf("fp cannot write to output\n");

    printf("%x\n", *fp);

    //fclose closes a file
    if (fclose(fp) == 0)
        printf("File is closed\n");

    //freopen attaches a diff filename to existing file in stream
    //freopen(filename, mode, stream)
    //if null is returned the func can change the stream mode
    //to the specified mode parameter
    fp = freopen("out.txt", "w", stdout);

    printf("This sentence is redirected to a file.\n");
    if (fp == NULL)
        printf("Error: file does not exist\n");
    return 0;
}


