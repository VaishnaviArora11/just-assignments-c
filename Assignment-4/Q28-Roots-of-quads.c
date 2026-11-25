//                                                        Question 28. Roots of a Quad

// A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. 
// Implement a solution to calculate the roots of a quadratic equation.


#include <stdio.h>
#include <math.h>

void roots(int a, int b, int c);

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    roots(a, b, c);
}

void roots(int a, int b, int c){
    float quad;
    quad = (b * b) - (4 * a * c);
    if (quad >= 0){
        float root1 = (-b + sqrt(quad)) / (2 * a);
        float root2 = (-b - sqrt(quad)) / (2 * a);
        printf("%f\n%f", root1, root2);
    } else{
        printf("Imaginary");
    }
}