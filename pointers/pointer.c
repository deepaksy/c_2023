#include<stdio.h>

int main(){
    char i,*ptr;
    ptr = &i;
    *ptr = 10;
    printf("%d",i);
    return 0;
}