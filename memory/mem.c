#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define SIZE 40

int *array(){
    int *array = (int* ) malloc(sizeof(int)*SIZE);
    return array;
}

int main(){
    int *numbers;
    numbers = array();
    for(int i=0;i<SIZE;i++){
        srand(time(NULL));
        numbers[i] = i+1;
    }

    for(int j = 0;j<SIZE;j++){
        printf("%d\t",numbers[j]);
    }
    free(numbers);
    printf("\nMalloc Memory successfully freed!!");
    return 0;
}