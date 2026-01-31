#include <stdio.h>

void function()
{
    int x=10; //Local variable (also automatic)
    auto int y=20; //Automatic variable
    printf("Auto Variable: %d",y);
}
int main()
{
    function();
    return 0;
}