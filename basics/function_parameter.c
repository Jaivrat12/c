/* To demonstrate types of function parameters:
 * 1.call by value 
 * 2.call by reference
 */

#include<stdio.h>

void function_one(int value) {
    //modify value
    value = 2;
}

void function_two(int * value) {
    *value = 2;
}

int main(void) 
{
    int a = 8;
    printf("(a)%d - initially\n", a);
    function_one(a);
    //after passing value of a to func. [using 'call by value']
    printf("(a)%d - function_one(a)\n", a);
    function_two(&a);
    //after passing address of variable a to func. [using 'call by reference' 
    printf("(a)%d - function_two(&a)\n", a);
    return 0; 
} 