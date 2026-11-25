//                                                        Question 53 : Printing Press

// A printing press needs to repeat labels in a fixed tabular layout. 
// Implement a solution to display: 
//             1 2 3 4 5   
//             1 2 3 4 5   
//             1 2 3 4 5


#include <stdio.h>

int main(){
    int n = 3, x = 5;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= x; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

