#include <stdio.h>  
int add(int,int);  
int sub(int,int);  
  
int main()  
{  
    int x,y,r;              
    int (*fp[2]) (int,int) = {add,sub};        
 
    printf("Enter the values of x and y :");  
    scanf("%d %d",&x,&y);  
    r=(*fp[0]) (x,y);        
    printf("\nSum of two values is : %d",r);  
    r=(*fp[1]) (x,y);              
    printf("\nDifference of two values is : %d",r);  
 
    return 0;  
}  
  
int add(int x,int y)  
{  
    int a=x+y;  
    return a;  
}  
int sub(int x,int y)  
{  
    int a=x-y;  
    return a;  
}  
