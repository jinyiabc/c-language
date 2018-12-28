#include <stdio.h>

#define  message_for(a, b)  \
   printf(#a " and " #b ": We love you!\n")

int main(void) {
   message_for(Carole, Debra);
   return 0;
}

//The stringize or number-sign operator ( '#' ),
//when used within a macro definition, 
//converts a macro parameter into a string constant. 
