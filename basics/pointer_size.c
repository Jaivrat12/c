/* 
 * To demonstrate an address (pointer) always occupy fixed amount of bytes.
 */
 
#include <stdio.h>

int main(void) {
    #define printsz(v) printf("Size of " #v "is %d\n", sizeof(v))
    
    struct linked_list {
        int data;
        struct linked_list * pointer_to_struct;
    } link;
    int num = 88;
    float decimal = 3.14;
    void * pointer_to_void = NULL;
    int * pointer_to_int = &num;
    float * pointer_to_float = &decimal;
    
    printsz(pointer_to_void);
    printsz(pointer_to_int);
    printsz(pointer_to_float);
    printsz(link.pointer_to_struct);
    
    return 0;
}