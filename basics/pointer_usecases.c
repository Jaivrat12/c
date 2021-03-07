/* 
 * To demonstrate usescase of pointers.
 */
 
#include <stdio.h>
#include <stdlib.h>

void half_value(float * value){
    *value = *value / 2.0;
}

int main(void) {
    float a = 5.0;
    
    printf("(a)%f\n", a);
    //1.To modify a value using function
    half_value(&a);
    printf("(a)%f\n", a);
    
    //2.To store starting address of allocated memory
    // and use it as array.
    int * new_array = malloc(10 * sizeof(int));
    //This reserves 10 integers worth of space, in series.
    //To access the reserved space, we use pointer arithematic.
    for(int i = 0; i < 10; ++i){
        *(new_array + i) = i;
    }
    for(int i = 0; i < 10; ++i){
        printf("new_array[%d] = %d\n", i, *(new_array+i));
    }
    
    return 0;
}