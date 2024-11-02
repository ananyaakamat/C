#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius) {
    // Formula: (°C × 9/5) + 32 = °F
    return (celsius * 9.0/5.0) + 32.0;
}

// Function to convert Fahrenheit to Celsius
float fahrenheit_to_celsius(float fahrenheit) {
    // Formula: (°F - 32) × 5/9 = °C
    return (fahrenheit - 32.0) * 5.0/9.0;
}

int main() {
    // Print welcome message
    printf("Temperature Conversion Script\n");
    printf("--------------------------------\n");

    int choice;
    float celsius, fahrenheit; // Move variable declarations to the top
    while (1) {
        // Print menu options
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("3. Quit\n");

        // Get user input
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Convert Celsius to Fahrenheit
                printf("Enter temperature in Celsius: ");
                scanf("%f", &celsius);
                printf("%.2f°C is equal to %.2f°F\n", celsius, celsius_to_fahrenheit(celsius));
                break;
            case 2:
                // Convert Fahrenheit to Celsius
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &fahrenheit);
                printf("%.2f°F is equal to %.2f°C\n", fahrenheit, fahrenheit_to_celsius(fahrenheit));
                break;
            case 3:
                // Quit program
                printf("Goodbye!\n");
                return 0;
            default:
                // Invalid choice
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}