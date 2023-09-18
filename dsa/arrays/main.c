#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#ifndef SEPARATOR
#define SEPARATOR '*'
#define SEPARATOR_LEN 10
static int n;
void seperator(const char *value){
    int length = strlen(value);
    int totallength = length+(2*SEPARATOR_LEN)+1;
    char *str = (char*) malloc(totallength);
    memset(str,SEPARATOR,SEPARATOR_LEN);
    strncpy(str+SEPARATOR_LEN,value,length);
    memset(str+SEPARATOR_LEN+length,SEPARATOR,SEPARATOR_LEN);
    str[totallength] = '\0';
    printf("\n%s\n",str);
}
int * insertatbegining(int arr[]);
void printarray(int array[],int size);
void main(){
    int *arr;
    printf("Enter the number of item you want to allocate: ");
    scanf("%d",&n);
    arr = (int*) calloc(n,sizeof(int));
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    printarray(arr,n);
    /**Insert at begining*/
    insertatbegining(arr);
    printarray(arr,n);
}

int* insertatbegining(int arr[]){
    seperator("Insert at Begining");
    int data;
    printf("\n Enter the element to insert at begining: ");
    scanf("%d",&data);
    int * temp = arr;
    temp = realloc(temp,(n+1)*sizeof(int));
    for(int i=n;i>=0;i--){
        temp[i+1] = temp[i];
    }
    temp[0] = data;
    n++;
    return temp;
}



void printarray(int array[],int size){
    for(int n=0;n<size;n++){
        printf("%d\t",array[n]);
    }
    printf("\n");
}
#endif