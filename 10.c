/*
   1
  2 2
 3 3 3
4 4 4 4
   .
   .
   .
   */

#include <stdio.h>

int main()
{
   int i,j,k,n;
   printf("Enter valun of n:");
   scanf("%d",&n);
   
   for(i=1; i<=n; i++)
   {
       for(j=n-1; j>=i; j--)
       {
           printf(" ");
       }
       for(k=1; k<=i; k++)
       {
           printf("%d ",i);
       }
       printf("\n");
   }

    return 0;
}