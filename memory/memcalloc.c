#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int *ptr;
    int n=5;
    printf("Enter the number of elements: "); 
    scanf("%d",&n);

    ptr = (int*) calloc(n,sizeof(int));

    if(ptr ==NULL){
        printf("Unable to allocate memory!!");
        exit(EXIT_SUCCESS);
    }

printf("Successfully allocated the memory using calloc(). \n");

    //initialize
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }

    //print
    for(int j=0;j<n;j++){
        printf("%d\t",ptr[j]);
    }

    //free the allocated space
    free(ptr);
    printf("\nCalloc Memory successfully freed.");

    return 0;
}