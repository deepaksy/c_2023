#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
    char alphabets[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n",strlen(alphabets));
    printf("%d\n",sizeof(alphabets));
    // string concatenation
    char str1[20] = "Hello ";
    char str2[] = "World!";
    printf("\nsize: %d\n",strlen(str1));
    int totalsize = strlen(str1)+strlen(str2)+1;
    char * str = (char*) malloc(strlen(str1)+strlen(str2)+2);
    // memset(str,'H',strlen(str1));
    strncpy(str,str1,strlen(str1));
    memset(str+strlen(str1),' ',1);
    strncpy(str+strlen(str1)+1,str2,strlen(str2));
    str[totalsize] = '\0';
    // printf("%s\n",str1);
    printf("%s\n",str);
}