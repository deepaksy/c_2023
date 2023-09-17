#include<stdio.h>
#include<stdlib.h>

struct student{
    char *name;
    char sec;
    int rollno;
};
typedef struct student student;
int main(){
    student s;
    char name[] = "Deepak";
    s.name = name;
    s.rollno = 21;
    s.sec = 'A';
    printf("Name: %s\n",s.name);
    printf("rollno: %d\n",s.rollno);
    printf("sec: %c\n",s.sec);
    return 0;
}