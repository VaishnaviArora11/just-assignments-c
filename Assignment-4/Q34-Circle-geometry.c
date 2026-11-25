//                                                        Question 34 : Circle Geometry

// A geometry teaching tool computes circle properties depending on student’s choice. 
// Implement a solution to calculate area, circumference, or diameter of a circle.

#include <stdio.h>

int main(){
    float radius;
    char operation;
    printf("Enter a number :");
    scanf("%f", &radius);
    printf("Enter operation : ");
    scanf(" %c", &operation);
    if (operation == 'a'){
        printf ("%f", (22 / 7) * radius * radius);
    } else if (operation == 'c'){
        printf ("%f", 2 * (22 / 7) * radius);
    } else if (operation == 'd'){
        printf ("%d", 2 * radius);
    }
}

