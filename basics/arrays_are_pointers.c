/* 
 * To demonstrate arrays are pointers.
 */
 
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int my_array[5] = {1, 3, 5, 7, 9};
    
    //An array's name when given as input to printf
    // prints its address.
    printf("(myarray)%d\n", my_array);
    //And address are known as pointers in C.
    //So using pointer arithematic, we can traverse an array.
    for (int i = 0; i < 5; ++i){
        printf("(myarray+%d) %d\n", i, my_array + i);
    }
    //Now dereferencing a pointer yields the value at that location.
    for (int i = 0; i < 5; ++i) {
        printf("myarray[%d] = %d\n", i, *(my_array + i));
    }
    
    return 0;
}
