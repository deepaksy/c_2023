#include<stdio.h>
#include<stdlib.h>
void pat1(){
    // array declaration
    int numbers[5];
    size_t lenofarray;
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;
    lenofarray = sizeof(numbers)/sizeof(int);
    for(int i=0;i<lenofarray;i++){
        printf("%d\n",numbers[i]);
    }
}

void pat2(){
    int num[] = {1,2,3,4,5,6,7,8,9,10};
    size_t size = sizeof(num)/sizeof(4);
    for(int i=0;i<size;i++){
        printf("%d ",num[i]);
    }
}

void pat3(){
    int size;
    printf("Enter the size of number you want to print");
    scanf("%d",&size);
    int array[size];
    // initialize the contents
    for(int i = 0;i<size;i++){
        printf("content for %d : ",i+1);
        scanf("%d",&array[i]);
    }
    //printing the array
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}
int main(){
    pat1();
    pat2();
    pat3();
    return 0;
}