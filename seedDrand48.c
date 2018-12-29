#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

// without this, drand48() would always return the same sequence of #s: 0.000000, 0.000985, ...
srand48(time(NULL));

int i;
for(i = 0; i < 10; i++)
    printf("Random number #%d: %f\n", i, drand48());


   return(0);
}
