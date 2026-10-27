//                                                                    Question 11 : Salary With Bonus

// An HR system needs to calculate employees’ net salaries including a fixed 12% bonus for each worker. 
// Implement a solution to accept the number of employees and their basic salary. 
// Compute bonus, net salary, and display results. 


#include <stdio.h>

float salary(float money);

int main(){
    int num;
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        float money;
        scanf("%f", &money);
        printf("%f", salary(money));
    }
}

float salary(float money){
    return money + (money * 12 / 100);
}