#include <stdio.h>

int main() {

	// Condition results in either true[1] or false[0]
	int a = (1 == 1);
	int b = (1 == 0);
	printf("a: %d, b: %d\n", a, b);

	// Using Ternary Operator
	printf("(a == b)?: %s\n\n", (a == b) ? "Yes" : "No");

	// Null Character is equivalent to zero in integer value [ASCII]
	printf("NULL CHAR ('\\0') => %d\n\n", '\0');
	// Note how '\' is printed on terminal...


	// Any non zero value [also any negative value] is true, only zero is false
	printf("1 is %s\n", (1) ? "true" : "false");
	printf("10 is %s\n", (10) ? "true" : "false");
	printf("-12 is %s\n", (-12) ? "true" : "false");
	printf("0 is %s\n\n", (0) ? "true" : "false");


	// Assigning a value returns what is assigned
	printf("assigned: %d\n", a = 0);
	printf("assigned: %d\n", a = 10);
	// Using a Compound Assignment Operator returns the final value of the variable
	printf("updated value: %d\n\n", a += 42);


	// Working of Logical Operators:
	// 'OR' checks each of its operands until it gets a "TRUE"
	int x = 0, y = 0, z = 0;
	if(x++ || ++y || ++z);
	// 'x' & 'y' got incremented but 'z' remained the same
	printf("[OR] x: %d, y: %d, z: %d\n", x, y, z);

	// 'AND' checks each of its operands until it gets a "FALSE"
	x = y = z = 1;
	if(x-- && --y && --z);
	// 'x' & 'y' got decremented but 'z' remained the same
	printf("[AND] x: %d, y: %d, z: %d\n", x, y, z);

	// using 'NOT' on non-zero values always results in 0
	// using 'NOT' on 0 always results in 1
	printf("[NOT] !1 = %d, !(-21) = %d, !0 = %d\n\n", !1, !(-21), !0);

	// Extras: Precedence & Associativity of operators...
}
