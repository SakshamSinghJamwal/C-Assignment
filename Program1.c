#include<stdio.h>
void main()
{
    int num, i=1, j=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(i<=num)
    {
        if(num%i==0)
        {
        j++;
        }
        i++;
    }
    if(j==2)
    {
        printf("\n%d is a prime number", num);
    }
    else
    printf("\n%d is not a prime number", num);
}