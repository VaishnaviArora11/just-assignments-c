//                                                             Question 7 : Longest Side 
// A civil engineer wants to check the longest side of a triangular structure using Pythagoras’ theorem. 
// Implement a solution to compute the hypotenuse of a right-angled triangle. 
// Formula :
//    base^2 + height^2 = hypot^2

#include <stdio.h>
#include <math.h>

double hypotn(int base, int height);

int main(){
    int base, height;
    scanf("%d %d", &base, &height);
    printf("%lf", hypotn(base, height));
}

double hypotn(int base, int height){
    int hypoteneuse = base * base + height * height;
    return sqrt(hypoteneuse);
}