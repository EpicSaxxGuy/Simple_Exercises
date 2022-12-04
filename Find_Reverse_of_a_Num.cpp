/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Online C++ compiler to run C++ program online
#include <iostream>  
#include <cmath>

using namespace std; 
int reverse_it(int x, int d){  
    int reverse = 0;
    for(int i = 0; i <= d - 1; i++){ 
        int temp = 0;  
        int remainder; 
        remainder = x % 10; 
        temp = remainder * pow(10, d - 1 - i); 
        reverse += temp; 
        x /= 10;
    }
    return reverse;
}
int findDigits(int n, int &d){
    int temp = n;
    while(temp >= 10){ 
        temp /= 10; 
        d++;
    } 
    reverse_it(n, d);
    return d;
} 
void print_all(int a, int b){ 
    cout << "Here's my number: "<< a << endl;
    cout << "Here's the number of digits: " << findDigits(a, b) << endl; 
    cout << "Here's my reverse number: " << reverse_it(a, b);
}
int main() {
    int num, digits = 1; 
    cout << "Enter a number: ";
    cin >> num;   
    print_all(num, digits);
    
    return 0;
}