#include <stdio.h>

int pall(int );
int reverse(int );

int main()
{
    int num;
    printf("Enter number ");
    scanf("%d",&num);
    printf("Reverse is %d\n",reverse(num));
    if (pall(num)==1)
    {
        printf("Pallindrome");
    }
    else
    {
        printf("Not Pallindrome");   
    }
    return 0;
}

int pall(int num)
{
    if (num == reverse(num))
    return 1;
    else
    return 0;
}

int reverse(int num)
{
    int rev= 0;
    while (num>0)
    {
        rev = rev*10 + num%10;
        num /= 10;
    }
    return rev;
}
