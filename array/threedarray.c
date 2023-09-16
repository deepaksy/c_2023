#include<stdio.h>
/**
 * @brief A 3 dimensional array is just a collection of two 2 dimensional array.
 * 
 * @return int 
 */
int main(){
    int array[2][2][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // Print element of 3 dimensional array
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                printf("array[%d][%d][%d]: %d\n",i,j,k,array[i][j][k]);
            }
        }
    }
    return 0;
}