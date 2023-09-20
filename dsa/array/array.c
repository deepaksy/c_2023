#include<stdio.h>
#ifndef SIZE
#define SIZE 100
// global variable
int size=0;
void initialize(int arr[]){
    printf("Enter no. of element to insert: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
void insertatbegining(int el,int arr[]){
    printf("\nInsert at begining\n");
    // printf("size: %d",size);
    for(int i=size-1;i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0] = el;
    size++;
}

void insertatend(int el,int arr[]){
    printf("\nInsert at End\n");
    arr[size] = el;
    size++;
}

void insertat(int index,int el,int arr[]){
    if(index>size){
        printf("\nEnter correct value!\n");
    }
    else{
        if(index==0){
            insertatbegining(el,arr);
        }
        if(index==size){
            insertatend(el,arr);
        }
        else{
            for(int i = size-1;i<=index;i--){
                arr[i+1] = arr[i];
            }
            arr[index] = el;
        }
    }
}

void print(int arr[]){
    printf("\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[SIZE];
    initialize(arr);
    insertatbegining(2,arr);
    print(arr);
    insertatend(23,arr);
    rerun:
    insertat(2,255,arr);
    print(arr);
    insertat(2,888,arr);
    print(arr);
}

#endif