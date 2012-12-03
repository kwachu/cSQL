#include <stdlib.h>
#include <stdio.h>

main()
{
 int i,x=1,y=1,j;
printf("Tabliczka mnozenia w zakresie 10x10\n-------------------------------------------------\n|       "); 
//gorne wiersz z liczbami
for (i=1;i<=10;i++)
 {
   printf("%4d",i);
   if (i==10) printf("|\n|                                               |");
 }

for (i=1;i<=10;i++) //wiersze pionowe
  {
   printf("\n| %4d  ",i);
   for (x=1;x<=10;x++)
	{
	 j=x*y;
	 printf("%4d",j);
	 if (x==10) printf("|");
	}
   y++;
  }
 printf("\n--------------------by-kwachu--------------------\n\n\n\n");
 
return 1; 
}
