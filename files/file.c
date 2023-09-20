#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    fptr = fopen("hello.txt","w");
    fprintf(fptr,"Hello world");
    fclose(fptr);
    return 0;
}