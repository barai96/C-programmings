#include<stdio.h>

void search(int ,int *,int);
void array(int , int *);

int main(){
   int n,m,i;
   printf("Enter the size of array:");
   scanf("%d",&n);
   int a[n];
   array(n,a);
   printf("enter the element to be searched:");
   scanf("%d",&m);
   search(n,a,m);
   return 0;
}

void array(int n, int *a)
{
    for(int i=0;i<n;i++)
   {
    printf("Enter the elements:\n");
    scanf("%d",a++);
   } 
}
void search(int n,int *a,int m){
    int l=0,i;
   for(i=0;i<n;i++)
   {
      if(m==a[i])
      {
         l++;
      }
   }
   if(l>0){
      printf("%d is present in the array %d times",m,l);
   } else {
      printf("%d is not present in the array",m);
   }
} 
