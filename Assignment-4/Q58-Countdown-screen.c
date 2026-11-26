//                                                        Question 58 : Countdown Screen

// A countdown screen dims lights row by row. 
// Implement a solution to display: 
//             *****   
//             ****   
//             ***   
//             **   
//             *


#include <stdio.h>

int main(){
    int n = 5, x = 5;
    for (int i = 1; i <= n; i++){
        for (int j = x; j >= i; j--){
            printf("*");
        }
        printf("\n");
    }
}

