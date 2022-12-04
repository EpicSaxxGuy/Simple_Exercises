/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, sum = 0; 
    scanf("%d", &num);
    
    for(int i = 1; i <= num-1 ; i++){ 
        if(num % i == 0) 
        sum += i; 
    } 
    if(sum == num) 
        printf("%d is a perfect number", num); 
    else 
        printf("%d is not a perfect number", num);

    return 0;
}
