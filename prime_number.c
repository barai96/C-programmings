#include <stdio.h>

int prime(int );
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if(prime(num))
    {
        printf("Prime number");
    }
    else
    {
        printf("Not prime");
    }
    
    return 0;
    
}

int prime(int n)
{
    int i;
    if (n==0 || n == 1)
    return 1;
    for (i= 2; i<=n/2;i++)
    {
        if (n%i== 0)
        return 0;
    }
    return 1;
}
