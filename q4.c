#include <stdio.h>
int main() {
    int I, i = 1, cube_of_number;
    printf("Enter an Integer of which youn want to cube and up to that: ");
    scanf("%d",&I);
    while (i<=I)
    {
       cube_of_number = i*i*i;
       printf("%d, ", cube_of_number);
       i++;

    }
    
    return 0;
}