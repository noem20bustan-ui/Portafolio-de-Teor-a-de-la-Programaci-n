#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int arregloTridimencional [2][3][2]={
        {
        {2,3},
        {5,2},
        {6,8}

        },

        {
        {7,3},
        {5,10},
        {6,12},
        }
        


    };
   
     for(int i=0; i<2; i++){
        for(int j=0; j<3; j++ ){

            for(int k=0; k<2; k++){

                printf("[%i][%i][%i]=%i\n", i, j,k ,arregloTridimencional[i][j][k]);
            }
        }
      return 0;
    }
