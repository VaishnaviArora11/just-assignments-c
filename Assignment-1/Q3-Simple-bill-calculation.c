//                             Question 3 : Simple Bill Calculation

// Implement a C program to calculate the total cost of an item. The program should: 
//   • Accept the price of one item. 
//   • Accept the quantity purchased. 
//   • Calculate and display the total bill. 
// Formula: 
//   Total Bill = Price × Quantity 



#include <stdio.h>
int main(){
    float price;
    int quantity;
    printf("Enter the price : ");
    scanf("%f", &price);
    printf("Enter the quantity purchased : ");
    scanf("%d", &quantity);
    float total_bill = price * quantity;
    printf("Total Bill : %f", total_bill);
}