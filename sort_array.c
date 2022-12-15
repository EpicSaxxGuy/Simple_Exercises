#include <stdio.h> 
 
//sorting an array in ascending order

int main(void){ 
  int size; 
  printf("Enter the size of your array: "); 
  int values[size]; 
  printf("Enter %d integers: ", size); 
  
  for(int i = 0; i <= size; i++){ 
    scanf("\n%d", &values[i]); 
  } 
  for(int i = 0; i <=size; i++){ 
    for(int j = i+1; j <=size-1; j++){ 
      int temp; 
      if(values[i] > values[j]){ 
        temp = values[j]; 
        values[j] = values[i]; 
        values[i] = temp;
      }
    }
  } 
  for(int i = 0; i<=size-1; i++){
    printf("%d", values[i]);
  }
}
