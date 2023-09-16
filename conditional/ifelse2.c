#include<stdio.h>

void main(){
    int choice;
    printf("what's your age: ");
    scanf("%d",&choice);
    if(choice<18){
        printf("You are ineligible for vote");
    }
    else if(choice>18 & choice<20){
        printf("you are eligible for vote, but need verification first.");
    }
    else{
        printf("you are eligible for vote!");
    }
}