//                                     Question 6 : Character Classifier

// Implement a program that takes a character and prints:
//   • Vowel if it is a, e, i, o, u (uppercase or lowercase)
//   • Digit if it is 0–9  
//   • Consonant if it is an English alphabet but not a vowel  
//   • Special Character otherwise  
// Hint: 
//   Use logical operators and/or switch. 
   



#include <stdio.h>
int main(){
    char ch_input;
    printf("Enter a character : ");
    scanf("%c", &ch_input);
    if(ch_input == 'a' || ch_input == 'e' || ch_input == 'i' || ch_input == 'o' || ch_input == 'u' || 
       ch_input == 'A' ||ch_input == 'E' ||ch_input == 'I' ||ch_input == 'O' ||ch_input == 'U'){
            printf("Vowels");
       } else if(ch_input >= '0' && ch_input <= '9'){
            printf("Digit");
       } else if(ch_input >= 65 && ch_input <= 90){
            printf("Consonant");
       } else if(ch_input >= 97 && ch_input <= 122){
            printf("Consonant");
       } else {
            printf("Special Character");
       }     
}


