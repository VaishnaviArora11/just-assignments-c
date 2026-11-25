//                                                        Question 42. Payroll Salary

// A payroll system categorizes employees based on their basic salary into low, medium, or high. 
// Implement a solution to classify salary category using nested if.

#include <stdio.h>

int main(){
    int salary;
    scanf("%d", &salary);
    if(salary >= 1000000){
        printf("Salary is high");
    } else if (salary <= 1000000 && salary >= 10000){
        printf("Salary is medium");
    } else {
        printf("Salary is low");
    }
}

