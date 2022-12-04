/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, oddSum = 0;  
    printf("Enter an integer: ");
    scanf("%d",&num); 
    for(int i = 1; i <= num - 1;i++){ 
        int oddDiv = 1; 
        if((i % 2 != 0)&&(num % i == 0)){ 
            oddDiv = i; 
            oddSum += oddDiv;
        }  
    } 
    printf("The sum of odd divisors of %d is: %d", num, oddSum);

    return 0;
}
