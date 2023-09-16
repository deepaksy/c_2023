#include<stdio.h>
#include<string.h>

void main(){
    char greetings[] = "Hello world!";
    printf("%s\n",greetings);
    // Accessing string characters
    printf("%c\n",greetings[0]);
    // Modify string characters
    greetings[0] = 'J';
    printf("%s\n",greetings);
    // Looping through a string
    char carname[] = "Volvo";
    int p;
    for(p = 0; p < (sizeof(carname)/1) ; ++p){
        printf("%c\n",carname[p]);
    }
}
