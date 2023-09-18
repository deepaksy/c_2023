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
// function declaration
int * insertatbegining(int arr[]);
void printarray(int array[],int size);
int * insertatend(int arr[]);
// main function
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
    insertatend(arr);
    printarray(arr,n);
}

int* insertatbegining(int arr[]){
    seperator("Insert at Begining");
    int data;
    printf("\n Enter the element to insert at begining: ");
    scanf("%d",&data);
    arr = realloc(arr,(n+1)*sizeof(int));
    for(int i=n;i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0] = data;
    n++;
    return arr;
}

int *insertatend(int arr[]){
    int *tmp,val;
    tmp = arr;
    free(arr);
    seperator(" Insert at End ");
    printf("Enter value to insert: ");
    scanf("%d",&val);
    int newval = n+1;
    size_t size_int = newval* sizeof(int);
    printf("\nvalue of n: %ld\n",size_int);
    tmp = (int *) realloc(tmp,size_int);
    tmp[n-1] = val;
    n++;
    return tmp;
}

void printarray(int array[],int size){
    for(int n=0;n<size;n++){
        printf("%d\t",array[n]);
    }
    printf("\n");
}
#endif