//                                                        Question 12 : Maturity Amounts

// A bank wants to provide exact maturity amount on savings deposits. 
// Implement a solution to compute Compound Interest. 
// Compound Interest Formula :
//    Total Amount (loan including investment) = Principal(1 + rate/no of times )


#include <stdio.h>

float maturityAmount(float principle, int rate, int n);

int main(){
    float p;
    int r, n;
    scanf("%f %d %d", &p, &r, &n);
    printf("%f", maturityAmount(p, r, n));
}

float maturityAmount(float principle, int rate, int n){
    return principle * (1 + rate / n);
}