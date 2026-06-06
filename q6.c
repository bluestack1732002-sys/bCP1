#include <stdio.h>
int main() {
    int n,i = 1;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    printf("Odd natural numbers: \n");
    while (i<= n)
    {
      if (i%2 == 0)
      {
        printf("");
      }
      else
      {
        printf("Number: %d \n",i);
      }
      
      i++;
    }
    
    return 0;
}