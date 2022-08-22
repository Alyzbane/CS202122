#include <stdio.h>
#include <ctype.h>

#define KEY '&'

int main(void)
{
    int org_ch, new_ch;
    
    while ((org_ch = getchar()) != EOF) 
    {
        new_ch = org_ch ^ KEY;
        if (isprint(org_ch) && isprint(new_ch))
            putchar (new_ch);
        else
            putchar (org_ch);
    }
    
    return 0;
}
