#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char fullName[30];
    printf("Type your full name: \n");
    fgets(fullName,sizeof(fullName),stdin);
    printf("Hello %s",fullName);
    return 0;
}