#include<stdio.h>

struct student{
    int age:18;
    int rollno:12;
};
int main(){
    struct student s1 = {12,23};
    printf("%d , %d",s1.age,s1.rollno);
    return 0;
}