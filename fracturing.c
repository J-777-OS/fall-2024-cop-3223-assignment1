//********************************************************
// Fracture.c
// Author: Jaden Meisner
// UCFID: 5680973
// Date: 9/08/24
// Class: COP 3223, Professor Parra
// Purpose: This program calculates geometric properties 
// based on values entered by the user. 
// Input: User's choice of values for x1,y1,x2,and y2.
//
// Output: The user's entered values as well as a
// few lines of calculation stating: distance, perimeter, 
// area, width, or height.
//********************************************************

#include <stdio.h>
#include <math.h>

// Defines value for PI
#define PI 3.14159

// Function prototypes
int main(void);
double calculateDistance(double x1, double y1, double x2, double y2);
double calculatePerimeter(double distance);
double calculateArea(double distance);
double calculateWidth(double x1, double x2);
double calculateHeight(double y1, double y2);

// Main function
int main(void) {
    double x1, y1, x2, y2, distance;

    // Get values from user
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    // Calculate distance between the two points
    distance = calculateDistance(x1, y1, x2, y2);

    // Call other functions with the calculated distance and points
    calculatePerimeter(distance);
    calculateArea(distance);
    calculateWidth(x1, x2);
    calculateHeight(y1, y2);

    return 0; // Return 0 for success
}

// Function that calculates the distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output the distance
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}

// Function that calculates the perimeter
double calculatePerimeter(double distance) {
    double perimeter = 2 * distance; // Diameter * 2 is the perimeter

    // Output the perimeter
    printf("The perimeter of the city is %.2lf\n", perimeter);

    return 1.0; // Return difficulty on a scale of 1-5
}

// Function that calculates the area
double calculateArea(double distance) {
    double radius = distance / 2;
    double area = PI * pow(radius, 2); // Area of a circle

    // Output the area
    printf("The area of the city is %.2lf\n", area);

    return 2.0; // Return difficulty on a scale of 1-5
}

// Function to calculate the width
double calculateWidth(double x1, double x2) {
    double width = fabs(x2 - x1); // Width is the absolute difference in x-coordinates

    // Output the width
    printf("The width of the city is %.2lf\n", width);

    return 3.0; // Return difficulty on a scale of 1-5
}

// Function to calculate the height
double calculateHeight(double y1, double y2) {
    double height = fabs(y2 - y1); // Height is the absolute difference in y-coordinates

    // Output the height
    printf("The height of the city is %.2lf\n", height);

    return 4.0; // Return difficulty on a scale of 1-5
}
