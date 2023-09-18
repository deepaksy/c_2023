#include<stdio.h>
#include<stdlib.h>
#define MAXCHAR 100
/**
 * @brief Dynamic memory allocation of Structure in c.
 * 
 */
typedef struct Person{
    char name[MAXCHAR];
    int age;
    float weight;
}person;
void flush_input(){
    int ch;
    while((ch = getchar())!='\n'&& ch!=EOF);
}
void main(){
    person *ptr;
    int i,n;
    printf("Enter no. of entry you want to do: ");
    scanf("%d",&n);
    flush_input();
    ptr = (person*) malloc(n* sizeof(person));
    for(i=0;i<n;++i){
        printf("Enter you name: ");
        fgets((ptr+i)->name,MAXCHAR,stdin);
        printf("Enter you age: ");
        scanf("%d",&(ptr+i)->age);
        printf("Enter your weight: ");
        scanf("%f",&(ptr+i)->weight);
        flush_input();
    }
    printf("Values:\n");
    for(i=0;i<n;++i){
        printf("name: %s\n",(ptr+i)->name);
        printf("age: %d",(ptr+i)->age);
        printf("weight: %.2f",(ptr+i)->weight);
    }
}