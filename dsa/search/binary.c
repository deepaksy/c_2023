#include<stdio.h>

int binarySearch(int arr[],int size,int el){
    int mid;
    int low = 0;
    int high = size-1;
    while(low<=high){
        mid = (low+high)/2;
    if (arr[mid] == el){
        return mid;
    }
    if(arr[mid]<el){
        low = mid+1;
    }
    else{
        high = mid-1;
    }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,12,23,34,45,47,49,55,67,68,69,71,73,76,88,89,91,93};
    int size = sizeof(arr)/sizeof(int);
    int el;
    printf("Enter the element to search: ");
    scanf("%d",&el);
    int searchIndex = binarySearch(arr,size,el);
    if(searchIndex>=0){
        printf("The element %d was found at index: %d",el,searchIndex);
    }
    else{
        printf("Element %d not present in array!",el);
    }
    return 0;
}