#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SEPERATOR "************************"

char* seperator(const char *name){
    int length =  strlen(name);
    int totallength = length +52;
    char * result = (char*) malloc(totallength+1);

    if(result == NULL){
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    memset(result,'\n',1);
    memset(result+1,'*',25);
    strncpy(result+25+1,name,length);
    memset(result+25+length+1,'*',25);
    memset(result+25+length+25+1,'\n',1);
    result[totallength]= '\0';
    return result;
}
void arithmeticoperators(){
    printf(seperator("Arithmetic Operators"));
    printf("\n""3.2 -2.1 : %f",(3.2-2.1));
    printf("\n""3.2+2.3 : %f",(3.2+2.3));
    printf("\n""3.2*2.2 : %f",(3.2*2.2));
    printf("\n""3.2/2.2 : %f",(3.2/2.2));
    printf("\n""4%%3 : %f",((4)%(3)));
}

void logicaloperators(){
    printf(seperator("Logical Operators"));
    printf("\n(3>2)|(2>5) : %d",(3>2)|(2>5));
    printf("\n(3>2)&(2>5) : %d",(3>2)&(2>5));
}

void assignmentoperators(){
    int a;
    printf(seperator("Assignment Operators"));
    a = 10;
    printf("\n""a : %d",a);
    a+=2;
    printf("\n""a+=2 : %d",a);
    a-=1;
    printf("\n""a-=1 : %d",a);
    a*=2;
    printf("\n""a*=2 : %d",a);
    a/=2;
    printf("\n""a/=2 : %d",a);
}

void comparisonoperators(){
    printf(seperator("Comparison Operators"));
    printf("\n""2>3 : %d",(2>3));
    printf("\n""3>=3 : %d",(3>=3));
    printf("\n""5<10 : %d",(5<10));
    printf("\n""10<=5 : %d",(10<=5));
    printf("\n""10==10 : %d",(10==10));
}

int main(){
    arithmeticoperators();
    assignmentoperators();
    logicaloperators();
    comparisonoperators();
    return 0;
}