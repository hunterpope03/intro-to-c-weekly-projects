/*
    * Author: Hunter Pope
    * Date: 2/9/25
    * Title: Temperature Converter
    * Description: Takes a user inputted temperature of a given unit and converts it.
*/

/* include statements */
#include<stdio.h>

/* function prototypes */
void print_menu(void); /* print starting menu */
char menu_input_validation(void); /* validate menu input */
float fahrenheit_to_celsius(float fahrenheit_temp); /* convert from fahrenheit to celsius */
float fahrenheit_to_kelvin(float fahrenheit_temp); /* convert from fahrenheit to kelvin */
float celsius_to_fahrenheit(float celsius_temp); /* convert from celsius to fahrenheit */
float celsius_to_kelvin(float celsius_temp); /* convert from celsius to kelvin */
float kelvin_to_celsius(float kelvin_temp); /* convert from kelvin to celsius */
float kelvin_to_fahrenheit(float kelvin_temp); /* convert from kelvin to fahrenheit */

/* main function */
int main(void) {
    char menu_input;
    float temp_input;
    float conversion_one;
    float conversion_two; /* define menu input, temperature input, and conversion variables */

    print_menu(); /* display starting menu */
    menu_input = menu_input_validation(); /* get validated menu input option */
    
    if (menu_input == 'a') {
        printf("\nEnter the temperature in Fahrenheit: "); /* Enter message based on selected unit */
        scanf("%f", &temp_input);
        conversion_one = fahrenheit_to_celsius(temp_input);
        conversion_two = fahrenheit_to_kelvin(temp_input); /* Convert to the other two units */
        printf("\n%.2f degrees Fahrenheit is:\n\n", temp_input);
        printf("\t%.2f degrees Celsius\n", conversion_one);
        printf("\t%.2f degrees Kelvin\n", conversion_two); /* display output */
    } else if (menu_input == 'b') {
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &temp_input);
        conversion_one = celsius_to_fahrenheit(temp_input);
        conversion_two = celsius_to_kelvin(temp_input);
        printf("\n%.2f degrees Celsius is:\n\n", temp_input);
        printf("\t%.2f degrees Fahrenheit\n", conversion_one);
        printf("\t%.2f degrees Kelvin\n", conversion_two);
    } else {
        printf("\nEnter the temperature in Kelvin: ");
        scanf("%f", &temp_input);
        conversion_one = kelvin_to_fahrenheit(temp_input);
        conversion_two = kelvin_to_celsius(temp_input);
        printf("\n%.2f degrees Kelvin is:\n\n", temp_input);
        printf("\t%.2f degrees Fahrenheit\n", conversion_one);
        printf("\t%.2f degrees Celsius\n", conversion_two);
    }
    
    return 0;
}

/* function definitions */
void print_menu(void) { 
    printf("*** Temperature Converter ***\n\n");
    printf("Select a unit option from the menu below:\n\n");
    printf("\ta) Fahrenheit\n");
    printf("\tb) Celsius\n");
    printf("\tc) Kelvin\n\n");
}

char menu_input_validation(void) { 
    char input_char;
    
    while (1) { 
        printf("Enter your choice (a, b, or c): ");
        scanf(" %c", &input_char);  /* read input in */
        while (getchar() != '\n'); /* only scan in first character of input string */

        if (input_char == 'a' || input_char == 'b' || input_char == 'c') { /* require a valid menu option */
            return input_char;
        } else {
            printf("Invalid input, try again\n");
        }
    }
}

float fahrenheit_to_celsius(float fahrenheit_temp) { 
    return (fahrenheit_temp - 32.0) * (5.0 / 9.0);
}

float fahrenheit_to_kelvin(float fahrenheit_temp) { 
    return (fahrenheit_temp - 32.0) * (5.0 / 9.0) + 273.15;
}

float celsius_to_fahrenheit(float celsius_temp) { 
    return celsius_temp * (9.0 / 5.0) + 32;
}

float celsius_to_kelvin(float celsius_temp) { 
    return celsius_temp + 273.15;
}

float kelvin_to_fahrenheit(float kelvin_temp) { 
    return (kelvin_temp - 273.15) * (9.0 / 5.0) + 32;
}

float kelvin_to_celsius(float kelvin_temp) { 
    return kelvin_temp - 273.15;
}