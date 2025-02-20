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
    printf("• Each primitive data type, size, and range of possible values," "\n\t");
    printf("• Each primitive data type with applicable format specifiers and their type, size, and range," "\n\t");
    printf("• And visualizations for each byte size to see how data types and specifiers change the bit size of a variable" "\n\n");
    printf("*NOTE: These values correspond with a 64-bit system which most computers are today." "\n\n");
}


void begin_program(void) {
    char null[100] = {0};
    printf("Enter anything to begin: ");
    scanf("%c", null);
}

void continue_program(void) {
    char null[100] = {0};
    printf("Enter anything to begin: ");
    scanf("%c", null);
}

void print_char(void) {
    int character = 1;
    printf("\n\n" "*** `char` ***" "\n\n");
    
    printf("• A `char` is the smallest data type in C and is not actually signed or unsigned by default - its signedness is implementation-defined." "\n\n");
    
    printf("\t" "`char` SIZE: 1 byteRANGE: undefined");
    for (int i = 0; i < character; i++) {
        printf(" ('_' represents 1 byte)") ;
    }
    printf("\t" "`signed char` SIZE: 1 byteRANGE: [-128 - 127]");
    for (int i = 0; i < character; i++) {
        printf(" ('_'") ;
    }
    printf("\t" "`unsigned char` SIZE: 1 byteRANGE: [0 - 255]");
    for (int i = 0; i < character; i++) {
        printf("_");
    }
}

void print_int(void) {
    
}

int main(void) {
    print_menu();
    begin_program();
    print_char(); 
    continue_program();
    print_int();

    
    return 0;
}


