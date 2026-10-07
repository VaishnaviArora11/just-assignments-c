//                                       Question 10 : Rock Paper Scissor using Switch

// Two players enter: 
//   1 → Rock 
//   2 → Paper 
//   3 → Scissors 
// Implement a C program using switch and if-else to determine: 
//   • Player 1 Wins  
//   • Player 2 Wins  
//   • Draw  
//   • Invalid Input if either player enters anything other than 1, 2, or 3.  
// Example: 
//   Input: 1 3 
//   Output: Player 1 Wins 


   
#include <stdio.h>

int main(){
    int user_1, user_2;
    printf("Player 1 : ");
    scanf("%d", &user_1);
    printf("Player 2 : ");
    scanf("%d", &user_2);
    switch(user_1){
        case 1 : 
             if(user_2 == 1){
                printf("Draw");
             } else if (user_2 == 2){
                printf("Player 2 Wins");
             } else if (user_2 == 3){
                printf("Player 1 Wins");
             } else {
                printf("Invalid Input");
             }
             break;
        case 2 : 
             if(user_2 == 2){
                printf("Draw");
             } else if (user_2 == 3){
                printf("Player 2 Wins");
             } else if (user_2 == 1){
                printf("Player 1 Wins");
             } else {
                printf("Invalid Input");
             }
             break;
        case 3 : 
             if(user_2 == 3){
                printf("Draw");
             } else if (user_2 == 1){
                printf("Player 2 Wins");
             } else if (user_2 == 2){
                printf("Player 1 Wins");
             } else {
                printf("Invalid Input");
             }
             break;
        default :
            printf("Invalid Input");
    }
}