#include <stdio.h>
#include <limits.h>
int i = 10;

int main() {
   printf("Storage size for char in bytes : %lu bytes\n" , sizeof(char));
   printf("Storage size for short in bytes : %lu bytes\n" , sizeof(short));
   printf("Storage size for long in bytes : %lu bytes\n" , sizeof(long));

   // printf("address of i is %d",&i);
   return 0;
}
