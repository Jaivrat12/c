#include <stdio.h>
#include <string.h>

#define initMsg "[Initialization] i = %d\n\n"
#define trueMsg "[Condition Check] (%d < %d)? TRUE!\n"
#define falseMsg "[Condition Check] (%d < %d)? FALSE!\n"
#define updateMsg "[Updation (i++)] i = %d\n\n"

int main() {

	int i, n = 5, len = strlen(falseMsg) - 2;

	for(
		printf(initMsg, i = 0);
		(i < n) ? printf(trueMsg, i, n) : printf(falseMsg, i, n) - len;
		printf(updateMsg, i++ + 1)
	) {

		printf("[Body] i = %d\n", i);
	}

	printf("\n---------END OF FOR LOOP---------\n\n");
}
