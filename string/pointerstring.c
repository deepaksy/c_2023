#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char name[100],*ptr;
    int i;
    ptr = name;
    scanf("%d",&i);
    fgets(ptr,sizeof(name),stdin);
    printf("%s",ptr);
    return 0;
}