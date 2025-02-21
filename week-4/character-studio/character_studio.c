/*
    * Author: Hunter Pope
    * Date: 2/16/25
    * Title: Character Studio
    * Description: Allows a user to enter a string and choose from a menu of options to analyze and manipulate the string in different ways.
*/

/* include statements */
#include <stdio.h>
#include <string.h> /* import the string library */

/* function prototypes */
void print_banner(void); /* print banner */
void print_menu(void); /* print starting menu after getting input string */
char menu_validation(void); /* validate menu input */
int character_count(char string[], char character); /* count the frequency of a character in a string */
int is_palindrome(char normal[], char reversed[]); /* check if a string is a palindrome */

/* main function */
int main(void) {
    char input_string[41] = {0}; /* initalize the input string */
    
    char menu_choice = '\0';
    
    print_banner();
    
    printf("First, enter in your string (with a maximum length of 40 characters):\n\t- ");
    scanf(" %[^\n]", input_string); /* read input in until a newline is encountered */
    printf("\n\tYou entered: %s\n\n", input_string); /* print result */
    
    print_menu();
    menu_choice = menu_validation(); /* get the valid menu choice*/
    
    if (menu_choice == 'a') {
        char count_input = '\0';
        int count_result = 0; /* initiialize variables to be used in inputting and calling functions */

        printf("*** Character Counter ***\n\n");
        printf("Enter the character you would like to count in your string: ");
        scanf(" %c", &count_input); /* get input character */
        while (getchar() != '\n'); /* only use first character of the input */

        count_result = character_count(input_string, count_input); /* call the proper function */

        printf("\nThe character %c appears %d time(s) in your string.", count_input, count_result); /* print the result */

    } else if (menu_choice =='b') {
        int length = strlen(input_string); /* get the length of the inputted string to prevent deallocated memory */

        printf("*** String Reversal ***\n\n");

        char reversed_string[41] = {0};
        for (int i = 0; i < length; i++) {
            reversed_string[i] = input_string[length - i - 1]; /* simple string reversal function */
        }

        printf("Reversed string: %s\n", reversed_string); /* print the result */
        
    } else if (menu_choice == 'c') {
        int is_pali = 0;
        int length = strlen(input_string); /* same reversal process as above */

        printf("*** Palindrome Checker ***\n\n");

        char reversed_string[41] = {0};
        for (int i = 0; i < length; i++) {
            reversed_string[i] = input_string[length - i - 1];
        }

        printf("The normal string is: %s\n", input_string);
        printf("The reversed string is: %s\n", reversed_string); /* print both the normal and reversed strings */
 
        is_pali = is_palindrome(input_string, reversed_string); /* call the proper function */

        if (is_pali == 1) {
            printf("\nThese two strings ARE palindromes");
        } else {
            printf("\nThese two strings ARE NOT palindromes."); // print the result of the palindrome check
        }
    }
    
    return 0;
}

/* function definitions */
void print_banner(void) { 
    printf("*** Character Studio ***\n\n");
    printf("This program will allow you to enter in a string and select from a menu of options to analyze and manipulate the string.\n\n");
}

void print_menu(void) { 
    printf("Now choose a menu option from below:\n\n");
    printf("\ta) View the count of a character in the string\n");
    printf("\tb) View the string reversed\n");
    printf("\tc) Check if the string is a palindrome\n");
}

char menu_validation(void) {
    char input_char = '\0';
    
    while (1) { 
        printf("\nEnter your choice (a, b, or c): "); /* prompt user for input */
        scanf(" %c", &input_char);  /* read input in */
        while (getchar() != '\n'); /* only scan in first character of input string */

        if (input_char == 'a' || input_char == 'b' || input_char == 'c') { /* require a valid menu option */
            return input_char;
        } else {
            printf("Invalid input, try again\n");
        }
    }
}

int character_count(char string[], char character) {
    int count = 0; /* initialize the counter */
    int i = 0; /* initialize the index */
    
    while (string[i] != '\0') {
        if (string[i] == character) { 
            count++; /* increment if character is found */
        }
        i++;
    }
    return count;
}

int is_palindrome(char normal[], char reversed[]) {
    return strcmp(normal, reversed) == 0; /* compare the two strings */
}
