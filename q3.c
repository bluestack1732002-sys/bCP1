#include <stdio.h>
int main() {
    int n, i=1;
    printf("Enter number till which you want to display natural numbers: ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d, ",i);
        
        i++;
    }
    
    return 0;
}