#include <stdio.h>

int main()
{
    int num =0, i,n;
    
    printf("Enter Length: \n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element: \n");
        scanf("%d",&a[i]);
    }

    X:
    num++;
    for (i=0;i<n;i++)
    {
        if(num==a[i])
        {
            goto X;
        }
    }
    printf("The lowest positive element not present in the array %d",num);
    
    return 0;
}
