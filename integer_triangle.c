#include <stdio.h>
//prints a triangle of integers of given size.
int main()
{ 
    int size; 
    printf("Enter the size of your triangle: "); 
    scanf("%d", &size); 
    
    for(int i=1; i <= size;i++){ 
        int j = 1; 
        for(j=1; j<=i; j++){ 
            printf("%d", j);
        } 
        printf("\n"); 
        j = 1;
    }
    return 0;
}
