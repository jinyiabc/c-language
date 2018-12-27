#include <stdio.h>
#include <limits.h>
int i = 10;

int main() {
   printf("Storage size for char in bytes : %d bytes\n" , sizeof(char));
   printf("address of i is %d",&i);
   return 0;
}
