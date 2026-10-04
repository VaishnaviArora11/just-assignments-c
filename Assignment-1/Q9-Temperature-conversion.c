//                          Question 9 : Temperature Conversion  

// Implement a C program to accept the temperature in Celsius and convert it into Fahrenheit. 
// Formula: 
//   Fahrenheit = (Celsius × 9 / 5) + 32 
// Ensure that the output is displayed as a decimal value. 
// Example:
//   Input: 25 
//   Output: 77.00 °F 



#include <stdio.h>
int main(){
    float temperature;
    printf("Enter Temperature in Celsius : ");
    scanf("%f", &temperature);
    float farenht = temperature * 9 / 5 + 32;
    printf("%f °F", farenht);
}