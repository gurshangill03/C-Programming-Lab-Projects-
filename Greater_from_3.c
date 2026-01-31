#include <stdio.h>

int main(){

    int a=12;
    int b=46;
    int c=49;

    if(a>b && a>c){
        printf("A is greatest %d",a);
    }
    else if(b>a && b>c){
        printf("B is greatest %d",b);
    }
    else{
        printf("C is greatest %d",c);
    }
}