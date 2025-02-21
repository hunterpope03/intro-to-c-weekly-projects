/*
    * Author: Hunter Pope
    * Date: 2/11/25
    * Title: Data Type Size Visualizer
    * Description: Displays the size (in bytes) and range of the primitive data types in C with and without format specifiers. 
    * NOTE: Assumes a 64-bit system architecture.
*/

/* include statements */
#include <stdio.h>

/* function prototypes */
void print_menu(void); /* print starting menu */
void begin_program(void); /* empty input to start program */
void continue_program(void); /* empty input to continue program */
void print_char(void); /* print char data type information */
void print_int(void); /* print int data type information */
void print_float(void); /* print float data type information */

/* main function */
int main(void) {
    /* just prints stuff */
    print_menu();
    begin_program();
    print_char(); 
    continue_program();
    print_int();
    continue_program();
    print_float();
    printf("\n\n");

    return 0;
}

/* function definitions */
void print_menu(void) {
    printf("*** Data Type Size Visualizer ***" "\n\n");
    printf("This interactive program will offer insight into some of the basic data types commonly used in C." "\n");
    printf("To meet this end, this program will display:" "\n\n\t");
    printf("• Each primitive data type, byte size, and range of possible values," "\n\t");
    printf("• Each primitive data type with applicable format specifiers and their type, size, and range," "\n\t");
    printf("• And visualizations for each byte size to see how data types and specifiers change the bit size of a variable" "\n\n");
    printf("*NOTE: These values correspond to a 64-bit architecture, which most computers are today." "\n\n");
}

void begin_program(void) {
    char null[100] = {0};
    printf("Enter anything to begin: "); /* prompt */
    scanf("%c", null); /* read input and continue */
}

void continue_program(void) {
    char null[100] = {0};
    printf("\n\n\n" "Enter anything to continue: "); /* prompt */
    scanf("%c", null); /* read input and continue */
}

void print_char(void) {
    int character = 1;
    printf("\n\n" "*** `char` ***" "\n\n\n");
    
    printf("• A `char` stores a single character which represents a single integer value and is the smallest data type in C. It is not actually signed or unsigned by default - its signedness is implementation defined." "\n\n");
    
    printf("\t" "`char` \tSIZE: 1 byte \tRANGE: undefined" "\n\t\t");
    for (int i = 0; i < character; i++) { /* loop through byte size and print underscore to offer visualization */
        printf("_ ('_' represents 1 byte)") ;
    }
    printf("\n\n\t" "`signed char` \tSIZE: 1 byte \tRANGE: [-128 - 127]" "\n\t\t");
    for (int i = 0; i < character; i++) {
        printf("_ ") ;
    }
    printf("\n\n\t" "`unsigned char` \tSIZE: 1 byte \tRANGE: [0 - 255]" "\n\t\t");
    for (int i = 0; i < character; i++) {
        printf("_ ");
    }
}

void print_int(void) {
    int short_int = 2;
    int integer = 4;
    int long_int = 8;
    printf("\n\n" "*** `int` ***" "\n\n\n");
    
    printf("• An `int` stores a whole number that can positive, negative, or zero. It is arguably the most common data type in C, so it has many more type modifiers. By default, a variable defined as `int` is signed." "\n\n");
    printf("\t" "`int` or `signed int` \tSIZE: 4 bytes \tRANGE: [-2.1e9, 2.1e9]" "\n\t\t");
    for (int i = 0; i < integer; i++) {
        printf("_ ") ;
    }
    printf("\n\n\t" "`unsigned int` \tSIZE: 4 bytes \tRANGE: [0 - 4.3e9]" "\n\t\t");
    for (int i = 0; i < integer; i++) {
        printf("_ ") ;
    }
    
    printf("\n\n\n" "• The `short` type modifier can be used to reduce the byte size of an `int`, therefore decreasing its range." "\n\n");
    printf("\t" "`short int` or `short signed int` \tSIZE: 2 bytes \tRANGE: [-32,768, 32,767]" "\n\t\t");
    for (int i = 0; i < short_int; i++) {
        printf("_ ") ;
    }
    printf("\n\n\t" "`short unsigned int` \tSIZE: 2 bytes \tRANGE: [0 - 65,535]" "\n\t\t");
    for (int i = 0; i < short_int; i++) {
        printf("_ ") ;
    }
    
    printf("\n\n\n" "• The `long` type modifier can be used to increase the byte size of an `int`, therefore increasing its range." "\n\n");
    printf("\t" "`long int` or `long signed int` \tSIZE: 8 bytes \tRANGE: [-9.1e18, 9.2e18]" "\n\t\t");
    for (int i = 0; i < long_int; i++) {
        printf("_ ") ;
    }
    printf("\n\n\t" "`long unsigned int` \tSIZE: 8 bytes \tRANGE: [0 - 1.8e19]" "\n\t\t");
    for (int i = 0; i < long_int; i++) {
        printf("_ ") ;
    }
    
    printf("\n\n\n" "• NOTE: The `long long` type modifier is valid in C and is commonly used when a larger range than `long` is required. On most 64-bit architectures, a `long long int` and a `long int` are both 8 bytes, but this is not guaranteed by the C standard." "\n\t");
    printf("- The primary difference between `long long` and `long` becomes significant in 32-bit architectures. Here, a `long` is typically 4 bytes, while `long long` is guaranteed to be 8 bytes, providing a much larger range." "\t");
}

void print_float(void) {
    int float_float = 4;
    int float_double = 8;
    int long_double = 16;
    printf("\n\n" "*** `float` ***" "\n\n\n");
    
    printf("• An `float` stores a single-precision floating-point number, or, in other words, a number with a decimal point. This allows for around 6-9 decimal digits." "\n\n");
    printf("\t" "`float` \tSIZE: 4 bytes \tRANGE: [3.4e-38 - 3.4e+38]" "\n\t\t");
    for (int i = 0; i < float_float; i++) {
        printf("_ ") ;
    }
    
    printf("\n\n\n" "• An `double` stores a double-precision floating-point number, offering more range and therefore more precise calculations. This allows around 15-17 decimal digits." "\n\n");
    printf("\t" "`double` \tSIZE: 8 bytes \tRANGE: [1.7e-308 - 1.7e+308]" "\n\t\t");
    for (int i = 0; i < float_double; i++) {
        printf("_ ") ;
    }
    
    printf("\n\n\n" "• An `long double` increases the range of a `double` variable, storing much larger numbers. This allows for around 18-21 decimal digits." "\n\n");
    printf("\t" "`long double` \tSIZE: 16 bytes \tRANGE: [3.4e-4932 - 3.4e+4932]" "\n\t\t");
    for (int i = 0; i < long_double; i++) {
        printf("_ ") ;
    }
}