#include <stdio.h>

int main()
{
    int size_of_int=sizeof(int);
    int size_of_char=sizeof(char);
    int size_of_float=sizeof(float);
    int size_of_double=sizeof(double);
    int size_of_long=sizeof(long);

    printf("The size of int data type: %d\n",size_of_int);
    printf("The size of char data type: %d\n",size_of_char);
    printf("The size of float data type: %d\n",size_of_float);
    printf("The size of double data type: %d\n",size_of_double);
    printf("The size of long data type: %d\n",size_of_long);
}