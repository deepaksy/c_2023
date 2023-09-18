#include<stdio.h>
#include<stdlib.h>

typedef union employee{
    int eno;
    double salary;
    char departmentcode;
}Employee;
//  union employee employee;
void main(){
    Employee emp1;
    // employee emp1;
    emp1.eno = 12;
    emp1.departmentcode = 'E';
    emp1.salary = 35430.55;
    printf("Employee Number: %d\n",emp1.eno);
    printf("Employee Department: %c\n",emp1.departmentcode);
    printf("Employee Salary: %.2f\n",emp1.salary);

}