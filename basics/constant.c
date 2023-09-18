#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main(){
    const int value = 10;
    //value = 20; error: Assignment of read-only variable.
    perror("unable to change value!");
    return 0;
}