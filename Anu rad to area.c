// Include the standard input/output library
#include <stdio.h>

int main() {
  // Declare variables to store the radius, area, and circumference of a circle
  float radius, area, circumference;

  // Use a loop to continuously prompt the user for input until a valid radius is entered
  while (1) {
    // Prompt the user to enter the radius of a circle
    printf("Enter the radius of a circle: ");
    
    // Read the user's input and store it in the radius variable
    scanf("%f", &radius);

    // Check if the entered radius is non-negative
    if (radius >= 0) {
      // If the radius is valid, break out of the loop
      break;
    }

    // If the radius is negative, print an error message and continue the loop
    printf("Error: Radius cannot be negative. Please enter a positive value.\n");
  }

  // Calculate the area of the circle using the formula: πr^2
  area = 3.142 * radius * radius;

  // Print the calculated area to the console
  printf("The area of circle is: %f \n", area);

  // Calculate the circumference of the circle using the formula: 2πr
  circumference = 2 * 3.142 * radius;

  // Print the calculated circumference to the console
  printf("The circumference is: %f \n", circumference);

  // Return an integer value indicating successful program execution
  return 0;
}