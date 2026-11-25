//                                                        Question 37: Triangle 

// A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. 
// Implement a solution to check the triangle type based on its sides.

#include <stdio.h>

void triangleType(int a, int b, int c);

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    triangleType(a, b, c);
}

void triangleType(int a, int b, int c){
    if(a == b && b == c){
        printf("Equilateral");
    } else if (a == b || b == c || c == a){
        printf("Isosceles");
    } else {
        printf("Scalene");
    }
}