#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * @brief A program to demonstrate call by reference & call by value in c.
 * 
 * @return int 
 */

int add(int *a, int *b);
int main(){
    int a,b;
    a = 10;
    b = 20;
    printf("%d\n",add(&a,&b));
    printf("a : %d\nb: %d",a,b);
    return 0;
}

int add(int *a, int *b){
    int sum = *a+*b;
    int temp = *a;
    *a = *b;
    *b = temp;
    return sum;
}