//                                                        Question 26: Architect Triangles

// An architect checks if three given angles can form a valid triangle. 
// Implement a solution to accept three angles and verify if the triangle is valid.

#include <stdio.h>

void triangle(int a, int b, int c);

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    triangle(a, b, c);
}

void triangle(int a, int b, int c){
    if(a + b + c == 0){
        printf("Yes");
    } else {
        printf("No");
    }
}