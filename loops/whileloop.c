#include<stdio.h>
#include<stdlib.h>
/**
 * @brief A program to demonstrate while loop in c.
 * 
 */

int main(){
    int count = 0;
    while(1){
        printf("\n%d",count);
        if(count>=100){break;exit(EXIT_SUCCESS);}
        count++;
    }
    return 0;
}