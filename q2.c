#include <stdio.h>
int main() {
    int sum = 0,i = 1;
    while (i<= 10)
    {
        sum += i;
        i++;
    }
    printf("Sum of first ten natural numbers: %d", sum);
    return 0;
}