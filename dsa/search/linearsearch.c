#include<stdio.h>

int linearsearch(int arr[], int size, int el){
    for(int i=0;i<size;i++){
        if(arr[i]==el){
            return i;
        }
    }
    return -1;
}


int main(){
    int arr[] = {1,2,34,23,5,5,34,15,3,1,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    int element = 4;
    int searchIndex = linearsearch(arr,size,element);
    printf("The element %d was found at index %d\n",element,searchIndex);
    return 0;
}