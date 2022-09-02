#include <stdio.h>

int main()
{
	int len,i,temp =0,choice;
	printf("Enter the length: \n");
	scanf("%d",&len);
	int a[len];
	
	for(i=0;i<len;i++)
	{
	    printf("Enter Element: \n");
	    scanf("%d",&a[i]);
	}
	
	printf("The unshorted array is: \n");
	for(i=0;i<len;i++)
	{
	    printf("%d\t",a[i]);
	}
	printf("\n1: Ascending Order, 2: Descending Order\n");
	scanf("%d",&choice);
	switch(choice)
	{
	    case 1:
	    for (i = 0; i < len; i++) 
	    {     
        for (int j = i+1; j < len; j++) 
        {     
           if(a[i] > a[j]) 
           {    
               temp = a[i];    
               a[i] = a[j];    
               a[j] = temp;    
           }     
        }     
        }
        break;
        
        case 2:
        for (i = 0; i < len; i++) 
	    {     
        for (int j = i+1; j < len; j++) 
        {     
           if(a[i] < a[j]) 
           {    
               temp = a[i];    
               a[i] = a[j];    
               a[j] = temp;    
           }     
        }     
        }
        break;
        
        default:
        printf("Invalid selection\n");
        break;
	}

    printf("The shorted array is: \n");
	for(i=0;i<len;i++)
	{
	    printf("%d\t",a[i]);
	}
    
}
