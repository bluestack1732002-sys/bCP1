#include <stdio.h>
int main() {
    int n,i = 1,y;
    printf("Enter an integer: ");
    scanf("%d",&n);
    while (i<=10)
    {
        y = n*i;
        printf("%d x %d = %d\n", n,i,y);
        i++;
    }
    
    return 0;
}