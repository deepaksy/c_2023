#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SEPERATOR "************************"

char* seperator(const char *name){
    int length =  strlen(name);
    int totallength = length +80;
    char * result = (char*) malloc(totallength+1);

    if(result == NULL){
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    memset(result,'*',25);
    strncpy(result+25,name,length);
    memset(result+25+length,'*',25);
    result[totallength]= '\0';
    return result;
}
void arithmeticoperators(){
    char title[] = "Arithmetic Operator";
    printf("\n%s %s %s",SEPERATOR,title,SEPERATOR);
    printf("\n""3.2 -2.1 : %f",(3.2-2.1));
    printf("\n""3.2+2.3 : %f",(3.2+2.3));
    printf("\n""3.2*2.2 : %f",(3.2*2.2));
    printf("\n""3.2/2.2 : %f",(3.2/2.2));
    printf("\n""4%%3 : %f",((4)%(3)));
}

void logicaloperators(){
    char title[] = "Logical Operators";
    printf("\n%s %s %s",SEPERATOR,title,SEPERATOR);
    printf("\n(3>2)|(2>5) : %d",(3>2)|(2>5));
    printf("\n(3>2)&(2>5) : %d",(3>2)&(2>5));
}

void assignmentoperators(){
    char title[] = "Assignment Operators";
    printf("\n%s %s %s",SEPERATOR,title,SEPERATOR);
}

int main(){
    arithmeticoperators();
    assignmentoperators();
    logicaloperators();
    printf("\n%s",seperator("Comparison Operator"));
    return 0;
}