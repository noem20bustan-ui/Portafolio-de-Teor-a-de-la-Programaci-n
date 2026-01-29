#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
   int lista[5];
   lista [0]= 8; 
   lista [1]= 10;
   lista [2]= 7;
   lista [3]= 5;
   lista [4]= 3;

   for(int i=0; i<=5; i++){
        printf("Elemento en la posicion %i\n = %i\n", i, lista[i]);
    }
   return 0;
}
