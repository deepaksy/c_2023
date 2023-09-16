#include<stdio.h>
#include<stdlib.h>
/**
 * @brief A Program to demonstrate for loop in c.
 * 
 * @return int 
 */
int main(){
    int count = 0;
    for(;;){
        count++;
        printf("\n");
        printf("%d",count);
        if(count>=100){
            break;
            exit(EXIT_SUCCESS);
        }
    }
    return 0;
}