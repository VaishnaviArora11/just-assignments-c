//                                    Question 4 : Farenheit to Celsius 
// A weather app developer needs to provide both Celsius and Fahrenheit readings. 
// Implement a solution to convert Fahrenheit temperature into Centigrade. 
// Formula: 
//   Fahrenheit = (Celsius × 9 / 5) + 32 

#include <stdio.h>

float temperatureConverter(float faren);

int main(){
    float faren;
    scanf("%f", &faren);
    printf("%f", temperatureConverter(faren));
}

float temperatureConverter(float faren){
    return (faren - 32) * 5 / 9;
}