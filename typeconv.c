#include<stdio.h>
/***
 * A C program to demonstrate the type conversion in C.
 * There are two type of type conversion possible in C:
 * 1. Implicit type conversion
 * 2. Explicit type conversion
*/
int main(){
    // Implicit type conversion
    float v_float = 9;
    int v_int = 8.88;
    printf("float :%.2f""\n",v_float);
    printf("float typecast to int :%.2f",v_int);

    // weird case
    float exp11 = 5/2;
    printf("\n5/2: %f",exp11);
    float expr2 = (float) 5/2;
    printf("\n(float)5/2: %.2f",expr2);
    return 0;
}