#include <stdio.h>

int main(void) {
	int noofturns;
	while(noofturns!=0){
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a+b>6){
	        printf("YES""\n");
	    }
	    else{
	        printf("NO""\n");
	    }
	    noofturns--;
	}
	return 0;
}

