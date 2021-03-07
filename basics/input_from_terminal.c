/* 
 * Input from file, using command line.
 * At the command line, type the name of the compiled program
 *  followed by input redirection: < inputfile
 *  For example: main < "input numbers.txt"
 */
 
 #include <stdio.h>
 
 int main(void) {
    int input;
    printf("Press <C-c> (Ctrl-c) to exit.\n");
    //Ctrl-c terminates a program, this is system behaviour.
    while(scanf("%d", &input) != EOF){ 
    //scanf() function upon scanming returns the character and
    // a file always has an 'EOF' (End-Of-File) character at its end.
        printf("(output)%d\n", input);
    }
    return 0;
 }