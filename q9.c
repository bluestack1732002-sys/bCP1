#include <stdio.h>
int main(){
    int n, i = 1, j = 1, square_of_number, sum = 0;
    printf("Enter an Integer of which youn want to cube and up to that: ");
    scanf("%d",&n);
    while (i<=n)
    {
       square_of_number = i*i;
       printf("%d, \n", square_of_number);
       i++;
    }   
    while(j<=n)
    {
     sum += j*j;
     j++;
    }
    printf("Sum of square of n natural numbers: %d\n", sum);
       return 0;
}