/*
* Auth: Hunter Pope
* Date: 2/16/25
* Title: Character Studio
* Description: Allows a user to enter a string and choose from a menu of options to analyze and manipulate the string in different ways.
*/
#include <stdio.h>
#include <string.h>

void print_banner(void) { 
    printf("*** Character Studio ***\n\n");
    printf("This program will allow you to enter in a string and select from a"    "menu of options to analyze and manipulate the string.\n\n");
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
        printf("\nEnter your choice (a, b, or c): ");
        scanf(" %c", &input_char);  /* read input in */
        while (getchar() != '\n'); /* only scan in first character of input string */

        if (input_char == 'a' || input_char == 'b' || input_char == 'c' || input_char =='d') { /* require a valid menu option */
            return input_char;
        } else {
            printf("Invalid input, try again\n");
        }
    }
}

int character_count(char string[], char character) {
    int count = 0;
    int i = 0;
    
    while (string[i] != '\0') {
        if (string[i] == character) {
            count++;
        }
        i++;
    }
    return count;
}

int main(void) {
    char input_string[41] = {0};
    
    char menu_choice = '\0';
    
    char count_input = '\0';
    int count_result = 0;
    
    char reversed_string[41] = {0};
    char string_result = '\0';
    
    print_banner();
    
    printf("First, enter in your string (maximum length of 40 characters):\n\t- ");
    scanf(" %[^\n]", input_string);
    printf("\n\tYou entered: %s\n\n", input_string);
    
    print_menu();
    menu_choice = menu_validation();
    
    if (menu_choice == 'a') {
        printf("*** Character Counter ***\n\n");
        printf("Enter the character you would like to count in your string: ");
        scanf(" %c", &count_input);
        while (getchar() != '\n');
        count_result = character_count(input_string, count_input);
        printf("\nThe character %c appears %d time(s) in your string", count_input, count_result);
    // } else if (menu_choice =='b') {
    //     printf("*** String Reversal ***\n\n");
    //     string_result = string_reversal(input_string, reversed_string);
    //     printf("%s", string_result);
    }
    
    return 0;
}

