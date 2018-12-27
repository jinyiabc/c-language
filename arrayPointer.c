#include <stdio.h>

const int MAX = 4;

int main () {
   int *ptr[MAX];
   char *string[] = {
      "Zara Ali",
      "Hina Ali",
      "Nuha Ali",
      "Sara Ali"
   };

   int i = 0, j=0;
   for( j= 0; j< MAX; j++){
       ptr[j] = &string[j];
   }


   for ( i = 0; i < MAX; i++) {
      printf("Value of string[%d] = %x\n", i, string[i] );
      printf("Value of string[%d] = %s\n", i, *ptr[i] );
      printf("Value of string[%d] = %x\n", i, *ptr[i] );


   }

   return 0;
}
