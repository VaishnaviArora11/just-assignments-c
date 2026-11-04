//                                                        Question 21 : Transaction Stat

// A bank statement marks a transaction as credit (+), debit (–), or neutral (0). 
// Implement a solution to classify a number as positive, negative, or zero.


#include <stdio.h>

void transactionStat(int amount);

int main(){
    int amount;
    scanf("%d", &amount);
    transactionStat(amount);
}

void transactionStat(int amount){
    if (amount > 0){
        printf("Credited");
    } else if (amount < 0){
        printf("Debited");
    } else {
        printf("Nill");
    }
}