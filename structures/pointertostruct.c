#include<stdio.h>

typedef struct Person{
    int age;
    float weight;
}person;

void main(){
    person *ptr,p1;
    ptr = &p1;
    printf("Enter age: ");
    scanf("%d=d",&ptr->age);
    printf("Enter weight: ");
    scanf("%f",&ptr->weight);
    printf("\nDisplaying values: \n");
    printf("Age: %d\n",ptr->age);
    printf("Weight: %.2f",ptr->weight);
}