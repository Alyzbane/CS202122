#include <stdio.h>
#include <stdlib.h>

#define N 20
int main()
{
    FILE *fp;
    char *st = malloc(N + 1);

    fp = freopen("out.dat", "ab", stdout);

    scanf("%s", st);

    //if buffer is NULL it create a buffer with a specified size
    //it either 0 or BUFSIZE
    //BUFSIZE is a macro
    //setvbuf(stream,NULL,_IOFBF, 0 | BUFSIZ)
    if ((setvbuf(fp, NULL, _IOFBF, N)) < 0)
        exit(EXIT_FAILURE);

    //flushes the buffer of fp
    fflush(fp); 

    //flushes all output stream
    fflush(NULL); //flushes all outpute stream
    printf("%s\n", st);

    //setvbuf change the way a stream is buffered
    //or change a stream that cannot use buffered
    //or assign the logs into a file directly without buffering
    //modes: 
    //_IOFBF (full buff...) data read from stream or written in it
    //either its full or empty
    
    //_IOLBF (line buff...) data is read from the stream
    //or written to the stream one line at a time
    
    //_IONBF (no buff...) data is read from the stream
    //or written directly to stream w/out buffer
    //(void) stvbuf(stream, buffer, mode, BUFFSIZE); 
    printf("%s", st);
    return 0;
}
