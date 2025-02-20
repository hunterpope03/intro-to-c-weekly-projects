/*
* Auth: Hunter Pope
* Date: 2/11/25
* Title: Data Type Size Visualizer
* Description: Displays the size (in bytes) and range of the primitive data types in c with and without format specifiers. 
* NOTE: Assumes a 64-bit system architecture.
*/
// Online C compiler to run C program online
#include <stdio.h>

void print_menu(void) {
    printf("*** Data Type Size Visualizer\n\n");
    printf("This program will offer information and display visualizations of the primitive data types in C. To achieve this, it will display:\n\n");
    printf("\t• Each primitive data type, size, and range once at a time\n");
    printf("\t• Every primitive data type with applicable format specifiers\n");
    printf("\t• Visualizations for each bit size\n");
}

void continue_program(void) {
    char null[100] = {0};
    printf("\nEnter anything to continue: ");
    scanf("%c", null);
}

void print_char(void) {
    int car = 1;
    printf("\n** char **");
    printf("\n\n• A char is the smallest data type in C and is signed by default.");
    printf("\n\n`char` OR `signed char` \tSIZE: 1 byte\tRANGE: [-128 - 127]\n\t");
    for (int i = 0; i < car; i++) {
        printf("_\t ('_' represents 1 byte)") ;
    }
    printf("\n\n`unsigned char` \tSIZE: 1 byte\tRANGE: [0 - 255]\n\t");
    for (int i = 0; i < car; i++) {
        printf("_");
    }
}

int main(void) {
    print_menu();
    
    continue_program();
    
    print_char(); 
    return 0;
}


