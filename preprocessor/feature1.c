#include <stdio.h>
/**
 * <function-return-type> __arribute__((constructor)) <function-name>: is used  to execute the statement before the execution of main function.
 *
 * <function-return-type> __attribute__((destructor)) <function-name>: It is used to execute the statement/function after the execution of main function.
 */
void func1();
void func2();
int value();
int test();

int __attribute__((constructor)) test();
void __attribute__((constructor)) func1();
void __attribute__((destructor)) func2();
int __attribute__((destructor)) value();

int test(){
	printf("\nTest function\n");
	return 0;
}

int value(){
	printf("Value function called\n");
	return 1;
}

void func1()
{
    printf("Inside func1()\n");
}
 
void func2()
{
    printf("Inside func2()\n");
}
 
int main()
{
    printf("Inside main()\n");
 
    return 0;
}
