//                             Question 2 : Accept and Display User Details

// Implement a C program to accept the following details from the user using scanf(): 
//   • Age 
//   • Height (in meters) 
//   • Grade (single character) 
// Display all the entered values clearly using printf().

//PSEUDOCODE : 
// Create variables
// print each 




#include <stdio.h>
int main(){
    int age;
    float height;
    char grade;
    printf("Enter Age : ");
    scanf("%d", &age);
    printf("Enter Height (in meters) : ");
    scanf("%f", &height);
    printf("Enter Grade : ");
    scanf(" %c", &grade);
    printf("Age is : %d\n", age);
    printf("Height is : %d\n", height);
    printf("Grade is : %c\n", grade);
}


