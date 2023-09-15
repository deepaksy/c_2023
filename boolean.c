#include<stdio.h>
#include<stdbool.h>
/***
 * In C programming, there is not in-built support for boolean data types.
 * It was introduced to C in C99 verison and require to import header to be imported.
*/

int main(){
    bool isdark = true;
    if(isdark){
        printf("Its dark mode");
    }
    else{
        printf("not a dark mode");
    }
    return 0;
}