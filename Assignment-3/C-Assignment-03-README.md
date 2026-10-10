#                         Loop-Based Problem Solving in C: A LeetCode-Style Practice Set
---------------------------------------------------------------------------------------------------------------------------------
# Q1. Sum of Squares Series
Given a positive integer n, calculate the sum of the series:
1² + 2² + 3² + 4² + ... + n²
## Example 1
    Input: n = 4
    Output: 30
    Explanation:
        1² + 2² + 3² + 4² = 1 + 4 + 9 + 16 = 30
## Example 2
    Input: n = 1
    Output: 1
    Explanation:
        1² = 1
## Example 3
    Input: n = 10
    Output: 385
## Input Format :
    A single integer n.
## Output Format : 
    Print a single integer, the sum of the squares of the first n natural numbers.
## Constraints
    1 <= n <= 10^5
    The result fits in a 64-bit signed integer (long long).
## Test Cases : 
###	Scenario	                                         Input	          Expected Output
	Smallest input, single term                           	1	                     1
	Small typical value	                                    4                      	30
	Slightly larger typical value                         	10	                    385
	Value where result exceeds 32-bit int range           	2000	            2668667000
	Maximum constraint value	                            100000          	333338333350000

---------------------------------------------------------------------------------------------------------------------------------

# Q2. Factorial of a Number 
Given a non-negative integer n, return its factorial, defined as: n! = n × (n-1) × (n-2) × ... × 1 
By definition, 0! = 1. 
## Example 1 
    Input: n = 5     
    Output: 120 
    Explanation: 
        5! = 5 × 4 × 3 × 2 × 1 = 120. 
## Example 2 
    Input: n = 0      
    Output: 1 
    Explanation: 
        0! is defined as 1. 
## Example 3 
    Input: n = 1        
    Output: 1 
## Input Format :
    A single integer n. 
## Output Format :
    Print a single integer, the factorial of n. 
## Constraints : 
    • 0 <= n <= 20 
    • The result fits in a 64-bit signed integer (long long). 
## Test Cases :
### Scenario                                       Input                                           Expected Output
1 Zero (special case)                                0                                                   1
2 One (base case)                                    1                                                   1
3 Small typical value                                5                                                   120
4 Value where result exceeds 32-bit int range        13                                                  6227020800
5 Maximum constraint value                           20                                                  2432902008176640000 

---------------------------------------------------------------------------------------------------------------------------------

# Q3. Geometric Series Sum 
Given the first term a, the common ratio r, and the number of terms n of a geometric series, return the sum of its first n terms: 
a + a·r + a·r² + ... + a·r^(n-1) 
## Example 1 
    Input: a = 2, r = 3, n = 4          
    Output: 80 
    Explanation: 
        Terms are 2, 6, 18, 54. Sum = 80. 
## Example 2 
    Input: a = 5, r = 1, n = 10         
    Output: 50 
    Explanation: 
        With r = 1 every term is 5, so the sum is 5 × 10 = 50. 
## Example 3 
    Input: a = 1, r = 2, n = 10          
    Output: 1023 
## Input Format:  
    A single line containing three space-separated integers a r n. 
## Output Format: 
    Print a single integer, the sum of the first n terms. 
## Constraints 
    • 1 <= a <= 100 
    • 1 <= r <= 10 
    • 1 <= n <= 10 
    • The result fits in a 64-bit signed integer (long long). 
## Test Cases 
### Scenario                                            Input                                  Expected Output         
1 Minimum values, single term                        1    1    1                                      1
2 Ratio 1 (constant series)                          5    1    10                                     50
3 Typical case                                       2    3    4                                      80
4 Powers of two                                      1    2    10                                     1023
5 Maximum values                                     100  10   10                                     111111111100 

---------------------------------------------------------------------------------------------------------------------------------

# Q4. Digit Count 
Given a non-negative integer n, count the total number of digits in it. 
## Example 1 
    Input: n = 12345       
    Output: 5 
## Example 2 
    Input: n = 7                
    Output: 1 
## Example 3 
    Input: n = 0               
    Output: 1 
    Explanation: 
        0 is written with a single digit. 
## Input Format 
    A single integer n. 
## Output Format 
    Print a single integer, the number of digits in n. 
## Constraints 
    • 0 <= n <= 10^9 
## Test Cases 
### Scenario                                            Input                                  Expected Output
1 Zero (special case)                                     0                                           1
2 Single digit                                            9                                           1
3 Typical multi-digit number                              12345                                       5
4 Power of 10 (trailing zeros)                            1000                                        4
5 Maximum value Expected Output                           1000000000                                  10 

---------------------------------------------------------------------------------------------------------------------------------

# Q5. Prime Number Check 
Difficulty: Easy 
Given a positive integer n, determine whether it is a prime number — a number greater than 1 that has no positive divisors other than 1 and itself. 
## Example 1 
    Input: n = 7    
    Output: true       
## Example 2 
    Input: n = 8             
    Output: false 
    Explanation: 
        8 = 2 × 4. 
## Example 3 
    Input: n = 1             
    Output: false 
    Explanation: 
        By definition, 1 is not a prime number.
## Input Format 
    A single integer n. 
## Output Format 
    Print true if n is prime, otherwise print false (in lowercase). 
## Constraints 
    • 1 <= n <= 10^6 
## Test Cases 
### Scenario                                            Input                                  Expected Output 
 1 Smallest input, not prime by definition                1                                        false  
 2 Smallest prime, only even prime                        2                                        true
 3 Odd composite number                                   9                                        false
 4 Perfect square of a prime                              49                                       false
 5 Large prime near the upper bound                       999983                                   true

---------------------------------------------------------------------------------------------------------------------------------