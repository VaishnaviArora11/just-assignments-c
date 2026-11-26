//                                                        Question 57. Festival Lights

// A festival lighting system turns on bulbs in increasing sequence.
// Implement a solution to display: 
//             *   
//             **   
//             ***   
//             ****   
//             ***** 


#include <stdio.h>

int main(){
    int n = 5, x = 5;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}

