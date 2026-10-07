//                                     Question 7 : ATM Withdrawal

// An ATM allows withdrawal only when: 
//   • PIN is correct (1234)  
//   • Amount is a multiple of 100  
//   • Amount is less than or equal to balance  
//   • Amount is greater than 0  
// Given pin, amount, and balance, print: 
//   • Invalid PIN  
//   • Invalid Amount  
//   • Insufficient Balance  
//   • Withdrawal Successful  
// Implement the program using nested if. 
   



#include <stdio.h>
int main(){
    int pin;
    int amount, balance = 500000;
    printf("Enter your PIN : ");
    scanf("%d", &pin);
    if(pin == 1234){
        printf("Enter Amount : ");
        scanf("%d", &amount);
        if(amount % 100 == 0 && amount <= balance && amount > 0){
            printf("Withdrawal Succesful");
        } else if (amount % 100 != 0 || amount <= 0){
            printf("Invalid Amount");
        } else if (amount > balance){
            printf("Insufficient Balance");
        }
    } else {
        printf("Invalid PIN");
    }
}

