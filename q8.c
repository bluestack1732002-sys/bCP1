#include <stdio.h>
int main(){
    int n,sum = 0,i = 1;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    while (i<= n)
    {
        if (i%2==0)
        {
            sum += i;

        }
        
        i++;
    }
    printf("Sum of first ten even natural numbers: %d", sum);
    return 0;
}