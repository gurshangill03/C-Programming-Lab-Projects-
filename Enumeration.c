#include <stdio.h>

typedef enum{FALSE,TRUE} bool;

int main()
{
    bool a = TRUE;
    bool b = FALSE;

    printf("True: %d\n",a);
    printf("False: %d\n",b);

    return 0;
}