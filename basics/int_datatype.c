/* 
 * To list sizeof various versions of int.
 */
 
#include <stdio.h>
 

int main(void) {
    //hash symbol used in preprocessor macro converts the given
    // text into string (wraps it in quotes, that is).
    //e.g. PRINT_SIZE(long) -> printf("long" ":"  " %d\n", sizeof(long));
    #define PRINT_SIZE(l) printf(#l ":" " %d\n", sizeof(l))
    #define PRINTLN printf("\n")
    // printf("(long long)" " %d", sizeof(long long));
    PRINT_SIZE(long long);
    PRINT_SIZE(long long int);
    PRINT_SIZE(long);
    PRINT_SIZE(long int);
    PRINT_SIZE(int);
    PRINT_SIZE(short);
    PRINT_SIZE(short int);
    /* PRINTLN;
    PRINT_SIZE(long long long int); */
    
    return 0;
}
