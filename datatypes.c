#include<stdio.h>
/**
 * @brief A c program to demonstrate primitive datatypes available in c.
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char *argv[]){
    short int v_sint = 2;
    short v_short = 1;
    double v_double = 2.2f;
    int v_int = 23;
    long int v_lint = 2345;
    long long int v_llint = 23423;
    unsigned int v_uint = 4322;
    unsigned long int v_ulint = 343211;
    unsigned long long int v_ullint = 98798;
    signed char v_schar = 'A';
    unsigned char v_uchar = 'D';
    float v_float = 4.4f;
    long double v_ld = 3.3;
    // Print statements
    printf("short int : %hd""\n",v_sint);
    printf("short : %hd""\n",v_short);
    printf("double : %lf""\n",v_double);
    printf("int : %d""\n",v_int);
    printf("long int : %ld""\n",v_lint);
    printf("long long int : %lld""\n",v_llint);
    printf("unsigned int : %u""\n",v_uint);
    printf("unsigned long int : %uld""\n",v_ulint);
    printf("unsigned long long int : %llu""\n",v_ullint);
    printf("signed char : %c""\n",v_schar);
    printf("unsigned char : %c""\n",v_uchar);
    printf("float : %.1f""\n",v_float);
    printf("long double : %f""\n",v_ld);
    return 0;
}