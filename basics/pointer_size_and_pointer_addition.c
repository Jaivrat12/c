/* 
 * To demonstrate how many bytes various types of pointers occupy
 * and how pointer arithematic works
 */
 
#include <stdio.h>
 

int main(void) {	
	int num = 88;
	char character = 'a';
	int * pointer_to_int = &num;
	char * pointer_to_char = &character;
	int ** double_pointer_to_int;
	char ** double_pointer_to_char = &pointer_to_char;
	
	
	printf("sizeof(double_pointer_to_int) is %d\n",sizeof(double_pointer_to_int));
	printf("sizeof(double_pointer_to_char) is %d\n",sizeof(double_pointer_to_char));
	printf("sizeof(pointer_to_int) is %d\n",sizeof(pointer_to_int));
	printf("sizeof(pointer_to_char) is %d\n",sizeof(pointer_to_char));
	printf("sizeof(int *) is %d\n",sizeof(int *));
	printf("sizeof(char *) is %d\n\n\n",sizeof(char *));

	printf("double_pointer_to_int+1 " "Address is %d\n", double_pointer_to_int+1);
	printf("double_pointer_to_int+2 " "Address is %d\n", double_pointer_to_int+2);
	printf("double_pointer_to_int+3 " "Address is %d\n\n", double_pointer_to_int+3);
	printf("double_pointer_to_char " "Address is %d\n", double_pointer_to_char);
	printf("double_pointer_to_char+1 " "Address is %d\n", double_pointer_to_char+1);
	printf("double_pointer_to_char+2 " "Address is %d\n", double_pointer_to_char+2);
	printf("double_pointer_to_char+3 " "Address is %d\n\n", double_pointer_to_char+3);
	printf("pointer_to_char " "Address is %d\n", pointer_to_char);
	printf("pointer_to_char+1 " "Address is %d\n", pointer_to_char+1);
	printf("pointer_to_char+2 " "Address is %d\n", pointer_to_char+2);
	printf("pointer_to_char+3 " "Address is %d\n\n", pointer_to_char+3);
	printf("pointer_to_int+0 " "Address is %d\n", pointer_to_int+0);
	printf("pointer_to_int+1 " "Address is %d\n", pointer_to_int+1);
	printf("pointer_to_int+2 " "Address is %d\n", pointer_to_int+2);
	printf("pointer_to_int+3 " "Address is %d\n\n", pointer_to_int+3);
	
    printf("Value at *(double_pointer_to_char) is %d\n", *(double_pointer_to_char));
	printf("Value at *(double_pointer_to_char)+1 %d\n", *(double_pointer_to_char)+1);
	printf("Value at *(double_pointer_to_char)+2 %d\n\n", *(double_pointer_to_char)+2); 
    printf("Value at **(double_pointer_to_char) is %d\n", **(double_pointer_to_char));
	printf("Value at **(double_pointer_to_char)+1 %d\n", **(double_pointer_to_char)+1);
	printf("Value at **(double_pointer_to_char)+2 %d\n\n", **(double_pointer_to_char)+2);
	
	printf("Value at pointer_to_int is %d\n", *pointer_to_int);
	printf("Address of num is %d\n", &num);
   
    return 0;
}
