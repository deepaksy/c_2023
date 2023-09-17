#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *name(){
    char *ch1;
    ch1 = (char*) malloc(sizeof(char)*7);
    const char* value = "Deepak";
    strncpy(ch1,value,strlen(value));
    ch1[strlen(value)] = '\0';
    // printf("%s\n",name);
    return ch1;
}
int main(){
    printf("%s",name());
    return 0;
}