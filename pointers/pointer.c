#include <stdio.h>

int main()
{
 int *ptr, a[5] = {0};
ptr++;    // Pointer moves to the next int position (as if it was an array)
++ptr;    // Pointer moves to the next int position (as if it was an array)
++*ptr;   // The value pointed at by ptr is incremented
++(*ptr); // The value pointed at by ptr is incremented
++*(ptr); // The value pointed at by ptr is incremented
*ptr++;   // Pointer moves to the next int position (as if it was an array). But returns the old content
(*ptr)++; // The value pointed at by ptr is incremented
*(ptr)++; // Pointer moves to the next int position (as if it was an array). But returns the old content
*++ptr;   // Pointer moves to the next int position, and then get's accessed, with your code, segfault
*(++ptr); // Pointer moves to the next int position, and then get's accessed, with your code, segfault

 char *arg[] = {"name", "hello"};

 printf("%s", arg[1]);
}
