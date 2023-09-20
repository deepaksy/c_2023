#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    fptr = fopen("hello.txt","r");
    char string[1000];
    while(fgets(string,1000,fptr)){
        printf("%s",string);
    }
    return 0;
}