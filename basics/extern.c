#include<stdio.h>
#include<stdlib.h>
#include "extern.h"

int value(){
    errno=10;
    printf("Errno: %d",errno);
}