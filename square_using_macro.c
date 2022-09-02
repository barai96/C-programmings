#include <stdio.h>
#define area(r) (r * r)


int main()
{
    int a;
    printf("Enter the number: \n");
    scanf("%d",&a);
    printf("The square is %d", area(a));

    return 0;
}
