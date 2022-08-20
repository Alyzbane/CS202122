#include <stdio.h>
#include <stdlib.h>

#define N 21

int main()
{

    FILE *fp;
    char st[N+1];
    char *tmp = malloc(N + 1);

    fp = freopen("log.txt", "w", stdout);
    setvbuf(fp, tmp, _IONBF, N);
    if(!fp)
        exit(EXIT_FAILURE);

    fputs("This is a temp file\n", fp);
    for(int i = 0; i < 5; i++)
    {
        scanf("%s", &st);
        printf("%i. %s\n", i, tmp);
    }
    
    //remove all buffer inputs
    fflush(fp);
    printf("Hahahaha", fp);
    printf("%s", tmp);
    fclose(fp);
    //int remove (const *char :wq
    remove("log.txt");
    return 0;
}
