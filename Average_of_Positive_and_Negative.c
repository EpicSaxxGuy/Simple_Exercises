#include <stdio.h>
/*It's a C program that inputs integer numbers until -999 is input. It also finds and display the 
average value of the positive integers and negative integers inputted by user.*/
int main()
{
    int num = 1, count_neg = 0, count_pos = 0, sum_pos = 0, sum_neg = 0; 
    while(1){ 
        printf("Enter a number: "); 
        scanf("%d", &num); 
        if(num == -999) 
            break;
        if(num < 0){ 
            sum_neg += num; 
            count_neg++; 
        } 
        else{ 
            sum_pos += num; 
            count_pos++;
        }   
    }
    if(count_neg == 0){ 
        printf("Average value of given positive numbers are: %f", 1.0*sum_pos/count_pos); 
        printf("\nGarbage value for the average of given negative numbers.");
    }  
    else if(count_pos == 0){  
        printf("Garbage value for the average of given positive average.");
        printf("\nAverage value of given negative numbers are: %f", 1.0*sum_neg/count_neg);
    } 
    else{
        printf("Average of given positive numbers are: %f", 1.0*sum_pos/count_pos); 
        printf("\nAverage of given negative numbers are: %f", 1.0*sum_neg/count_neg);
    } 
    return 0;
}
