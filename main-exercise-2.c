#include <stdio.h>
int main()
{
    int num, sum = 0, remainder;
    printf("Enter an integer: ");//178
    scanf("%d", &num);
    while (num != 0)
    {
        remainder = num % 10;
        sum       = sum + remainder;
        num       = num / 10;
        //printf("remainder: %d, sum: %d,number: %d\n",remainder,sum,num);
    }
    printf("Sum of digits of the number = %d", sum);
    return 0;
}