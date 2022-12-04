#include <stdio.h>

int main()
{
    int num, powOfNum, multp = 1;  
    scanf("%d %d",&num,&powOfNum); 
    
    for(int i = 1; i <= powOfNum; i++){ 
        multp *= num;
    }
    printf("%d", multp);
    return 0;
}
