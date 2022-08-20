#include <stdio.h>
#include <stdlib.h>

//using command line to get the filename
int main(int argc, char *argv[])
{
    FILE *fp;

    //only one file
    if(argc != 2) {
        printf("usage: filename\n");
        exit(EXIT_FAILURE);
    }

    //if the file does not exist
    if ((fp = fopen(argv[1], "r")) == NULL){
        printf("%s can't be opened\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    //redirecting to the file it had been open
    printf("%s opened\n", argv[1]);

    //closing the stdout stream
    printf("Closing the file...\n");
    fclose(fp);
    printf("File is close\n");

    return 0;
}
