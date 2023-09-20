#include<stdio.h>
#include<stdlib.h>

typedef struct arr
{
    int total_size;
    int used_size;
    int *array;
}Array;

void createArray(struct arr *a, int tSize, int uSize){
    a->total_size = tSize;
    a->used_size = uSize;
    a->array = (int*) malloc(tSize*(sizeof(int)));
}

void show(struct arr *arr){
    printf("\n");
    for(int i=0;i<arr->used_size;i++){
        printf("%d ",arr->array[i]);
    }
    printf("\n");
}

void setvalue(struct arr *arr){
    for(int i=0;i<arr->used_size;i++){
        printf("Enter element %d: ",i);
        scanf("%d",&(arr->array)[i]);
    }
}

void insertatbegining(int el,struct arr *arr){
    for(int i=arr->used_size;i>=0;i--){
        arr->array[i+1] = arr->array[i];
    }
    arr->array[0] = el;
    arr->used_size++;
}

int main(){
    Array arr;
    createArray(&arr,100,2);
    setvalue(&arr);
    show(&arr);
    insertatbegining(23,&arr);
    show(&arr);
    free(arr.array);

    return 0;
}