//                                              Question 5 : Triangle Park Area 
// An engineer is designing a triangular park with one right angle. 
// Implement a solution to compute the area of a right-angled triangle. 

#include <stdio.h>

float areaTriangle(float base, float height);

int main(){
    float base, height;
    scanf("%f %f", &base, &height);
    printf("%f", areaTriangle(base, height));
}

float areaTriangle(float base, float height){
    return 0.5 * base * height;
}