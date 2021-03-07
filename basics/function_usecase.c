/* 
 * To demonstrate the usescases of function.
 */
 
#include <stdio.h>
 
#if 0
int main(void) {
   int num_one = 50;
   int num_two = 49;
   float avg = (num_one + num_two) / 2.0;
   printf("Average of two numbers is %f\n", avg);
   return 0;
}

/* 
 *Below code does the same thing as above but using
 * functions.
 */
 
//Because of the preprocessor directive (command) below,
// code below this comment will not be included in compilation.
//To compile below code change "elif 0" to "elif 1" and 
// "if 1" to "if 0"
#elif 1

float average(float num1, float num2) {
    float sum = num1 + num2;
    float avg = sum / 2.0;
    return avg;
}

float return_pi() {
    return 3.14159265358979;
}

void print_text() {
    printf("(Result)");
}

int main(void) {
   //Function with a fixed return value
   float n1 = return_pi();
   float n2 = 2 * return_pi();
   
   //Function with parameters and return value.
   //Or in other words, function that takes input and
   // produces output from the given input.
   float ans = average(n1, n2);
   //Question: Can the avg variable from the average() function be 
   // accessed in main(). What happens when you try to print avg in
   // main().
   
   //Function without parameter or any return value;
   print_text();
   printf("%f\n", ans);
}

#endif