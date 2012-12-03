#include <stdio.h>
#include <stdlib.h>
int main()
{
int ta[10][10];
int i,j;
for (i=1;i<=10;i++)
 {
   for (j=1;j<=10;j++)
     {
       ta[i-1][j-1]=i*j;
       printf("%d",ta[i-1][j-1]);

     }
 }
printf("%d",ta[10][10]);
return();
}
