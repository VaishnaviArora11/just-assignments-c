//                          Question 8 : Employee Salary Calculation  

// An employee's monthly salary consists of:
//   • Basic Salary 
//   • Allowance 
//   • Bonus 
// Implement a C program to accept these values and calculate the final salary. 
// Formula: 
//   Final Salary = Basic Salary + Allowance + Bonus 
// Display the final salary up to two decimal places. 



#include <stdio.h>
int main(){
    float basic_salary, allowance, bonus;
    printf("Enter Basic Salary : ");
    scanf("%f", &basic_salary);
    printf("Enter Allowance : ");
    scanf("%f", &allowance);
    printf("Enter Bonus : ");
    scanf("%f", &bonus);
    float final_salary = basic_salary + allowance + bonus;
    printf("%.2f", final_salary);
}