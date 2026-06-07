#include <stdio.h>
int main() {
    int n,temp,temp1,count = 0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    temp = n;
    temp1 = n;
    while (temp>0)
    {
        temp/=10;
        count++;
    }
    printf("count: %d\n",count);
    int times,r,sum = 0,p=1;
    times = count;
    while (temp1 > 0)
    {
        r = temp1 % 10;
        temp1/=10;
        while(times>0){
            p = p*r;
            times--;
        }
        sum += p;
        times = count;
        p = 1;

    }
    printf("sum :%d\n",sum);
if (sum == n)
{
    printf("%d is Armstrong number\n.",n);
}
else{
    printf("Not an Armstrong number\n.",n);
}
    return 0;

}