//                                                 Question 3 : Space of Fountain
// An architect wants to calculate the space covered by a circular fountain. 
// Implement a solution to compute the area of a circle. 

#include <stdio.h>

float spaceCovered(float r){
    return r * r * 3.14;
}

int main(){
    float r;
    scanf("%f", &r);
    printf("%f", spaceCovered(r));
}