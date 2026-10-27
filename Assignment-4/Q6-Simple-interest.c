//                                              Question 6 : Simple Interest 
// A banker wants to calculate the amount a customer needs to pay after borrowing money. 
// Implement a solution to compute Simple Interest. 

#include <stdio.h>

float simpleInterest(float principle, float rate, float time);

int main(){
    float principle, rate, time;
    scanf("%f %f %f", &principle, &rate, &time);
    printf("%f", simpleInterest(principle, rate, time));
}

float simpleInterest(float principle, float rate, float time){
    return principle * rate * time / 100; 
}