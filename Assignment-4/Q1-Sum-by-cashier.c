//                             Question 1 : Sum By Cashier

// A cashier needs to add two amounts entered by a customer quickly. 
// Implement a solution to accept two numbers and compute their sum. 



#include <stdio.h>
int sumShop (int a, int b){
    return a + b;
}
int main (){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", sumShop(a, b));
}