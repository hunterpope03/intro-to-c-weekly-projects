/*
* Auth: Hunter Pope
* Date: 2/11/25
* Title: Data Type Size Visualizer
* Description: Displays the size (in bytes) and range of the primitive data types in C with and without format specifiers. 
* NOTE: Assumes a 64-bit system architecture.
*/
#include <stdio.h>

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
    printf("Enter anything to begin: ");
    scanf("%c", null);
}

void continue_program(void) {
    char null[100] = {0};
    printf("\n\n\n" "Enter anything to begin: ");
    scanf("%c", null);
}

void print_char(void) {
    int character = 1;
    printf("\n\n" "*** `char` ***" "\n\n\n");
    
    printf("• A `char` is the smallest data type in C and is not actually signed or unsigned by default - its signedness is implementation defined." "\n\n");
    
    printf("\t" "`char` \tSIZE: 1 byte \tRANGE: undefined" "\n\t\t");
    for (int i = 0; i < character; i++) {
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
    
    printf("• An `int` is arguably the most common data type in C, so it has many more type modifiers. By default, a variable defined as `int` is signed." "\n\n");
    printf("\t" "`int` or `signed int` \tSIZE: 4 bytes \tRANGE: [-214e7, 214e7]" "\n\t\t");
    for (int i = 0; i < integer; i++) {
        printf("_ ") ;
    }
    printf("\n\n\t" "`unsigned int` \tSIZE: 4 bytes \tRANGE: [0 - 429e7]" "\n\t\t");
    for (int i = 0; i < integer; i++) {
        printf("_ ") ;
    }
    
    printf("\n\n\n" "• The `short` type modifier can be used to reduce the byte size of an `int`, therefore also decreasing its range." "\n\n");
    printf("\t" "`short int` or `short signed int` \tSIZE: 2 bytes \tRANGE: [-32,768, 32,767]" "\n\t\t");
    for (int i = 0; i < short_int; i++) {
        printf("_ ") ;
    }
    printf("\n\n\t" "`short unsigned int` \tSIZE: 4 bytes \tRANGE: [0 - 65,535]" "\n\t\t");
    for (int i = 0; i < short_int; i++) {
        printf("_ ") ;
    }
    
    printf("\n\n\n" "• The `long` type modifier can be used to increase the byte size of an `int`, therefore also increasing its range." "\n\n");
    
    printf("\n\n\n" "• NOTE: The `long long` type modifier is valid in C and is commonly used when a larger range than `long` is required. On most 64-bit architectures, a `long long int` and a `long int` are both 8 bytes, but this is not guaranteed by the C standard." "\n\t");
    printf("- The primary difference between `long long` and `long` becomes significant in 32-bit architectures. Here, a `long` is typically 4 bytes, while `long long` is guaranteed to be 8 bytes, providing a much larger range." "\n\t");

    
}

int main(void) {
    print_menu();
    begin_program();
    print_char(); 
    continue_program();
    print_int();
    // continue_program();
    // print_float();
    // end_program();
    
    return 0;
}
