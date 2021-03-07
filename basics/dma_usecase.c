/* 
 * To demonstrate usecase of dynamic memory allocation
 */
 
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //We can resize an array, if we dynamically allocate it.
    int * my_array = calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++) {
        *(my_array+i) = i * 2;
    }
    for (int i = 0; i < 5; i++) {
        //Since arrays are pointers.
        //Thus the expression "a[i]" converts to "*(a + i)"
        // at lower level.
        printf("(myarray[%d])%d\n\n", i, my_array[i]);
    }
    
    my_array = realloc(my_array, 10 * sizeof(int));
    
    for (int i = 0; i < 10; i++) {
        printf("(myarray[%d])%d\n", i, my_array[i]);
    }
    free(my_array);
    
    return 0;
}
