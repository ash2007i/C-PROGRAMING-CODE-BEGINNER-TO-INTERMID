
/*
QUESTION :

Area calculator using switch-case: ask user for shape (1=circle, 2=square, 3=rectangle, 4=triangle). Ask for
required dimensions. Compute and print area and perimeter. Default case prints 'Invalid shape'.

*/

#include <stdio.h>

int main () {

 int shape;

  printf("Enter a shape (1 - circle, 2 - square, 3 - rectangle, 4 - triangle)"); // getting a input from the use for the shape 
  scanf("%d", &shape);  // the input is stored in the variable shape

    switch (shape) { // switch case to check the shape

        case 1: { // if the shape is circle

        float radius, area, perimeter; // declaring variables for radius, area and perimeter

        printf("Enter the radius of the circle: "); // asking user for radius
        scanf("%f", &radius); // storing the input in radius variable

        area = 3.14 * radius * radius; // calculating area of circle
        perimeter = 2 * 3.14 * radius; // calculating perimeter of circle

        printf("Area of circle: %.2f\n", area); // printing area of circle

        printf("Perimeter of circle: %.2f\n", perimeter); // printing perimeter of circle

        break; // breaking the case

        }

      
        case 2: { // if the shape is square

        float side, area, perimeter; // declaring variables for side, area and perimeter

        printf("Enter the side of the square: "); // asking user for side
        scanf("%f", &side); // storing the input in side variable

        area = side * side; // calculating area of square
        perimeter = 4 * side; // calculating perimeter of square

        printf("Area of square: %.2f\n", area); // printing area of square

        printf("Perimeter of square: %.2f\n", perimeter); // printing perimeter of square

        break; // breaking the case
        }

      
        case 3: { // if the shape is rectangle

        float length, width, area, perimeter; // declaring variables for length, width, area and perimeter

        printf("Enter the length and width of the rectangle: "); // asking user for length and width
        scanf("%f %f", &length, &width); // storing the input in length and width variables

        area = length * width; // calculating area of rectangle
        perimeter = 2 * (length + width); // calculating perimeter of rectangle

        printf("Area of rectangle: %.2f\n", area); // printing area of rectangle

        printf("Perimeter of rectangle: %.2f\n", perimeter); // printing perimeter of rectangle

        break; // breaking the case
        }

      
        case 4: { // if the shape is triangle

        float base, height, side1, side2, side3, area, perimeter;

        printf("Enter the base and height of the triangle: "); // asking user for base and height
        scanf("%f %f", &base, &height); // storing the input in base and height variables

        area = 0.5 * base * height; // calculating area of triangle

        printf("Enter the lengths of the three sides of the triangle: "); // asking user for

       //the lengths of the three sides

        scanf("%f %f %f", &side1, &side2, &side3); // storing the input in side1, side2 and side3 variables

        perimeter = side1 + side2 + side3; // calculating perimeter of triangle

        printf("Area of triangle: %.2f\n", area); // printing area of triangle

        printf("Perimeter of triangle: %.2f\n", perimeter); // printing perimeter of triangle

        break; // breaking the case
        }

        default: { // if the shape is invalid
            printf("Invalid shape\n"); // printing invalid shape to avoid the confuSON
            break; // breaking the case

}

    }
    

}
