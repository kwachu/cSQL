
#include <stdio.h>
#include <math.h>
//#include <conio.h>
//#include <curses.h>

int main(void)
{

char x;

printf("\n\n\nDelta w C!\nprogram ten policzy miejsca zerowe, trójmianu kwadratowego.\nChcesz? [T/n]");
scanf("%c",&x);
	while (x != 't' && x != 'T')
	{
	  printf("potwierdz wpisujac [t]\n");
//	  x = getch();
	  scanf("%c",&x);
//	  getch();
	}
	  
	  
	  	printf("\npodaj kolejne parametry równania kwadratowego\npostaci y= ax^2 + bx + c");
	int a,b,c;

		printf("\npodaj a = ");
		scanf("%d",&a);
		printf("\npodaj b = ");
		scanf("%d",&b);
		printf("\npodaj c = ");
		scanf("%d",&c);
		
		while (a == 0)
		{
			printf("\na nie moze byc rowne 0!!! podaj inne a!!!\n a = ");
	                scanf("%d",&a);
		}
//sprawdzamy rozwiazania
	double pierwiastek,x1,x2;
	double delta;
	
	delta = (b * b) - ( 4 * a * c);

	if (delta < 0)
		printf("******** UWAGA *********\nponiewaz wyróżnik jest mniejszy od zera,\nrównanie to nie ma miejsc zerowych!!!");
	else 
	{ 
	  if (delta != 0) 
		{
		printf("delta wieksza od zera");		

		pierwiastek = sqrt (delta);
		x1 = (-b - pierwiastek) / (2 * a);
		x2 = (-b + pierwiastek) / (2 * a);
		printf("\npierwsze miejsce zerowe =%.3f ", x1);
		printf("\ndrugie miejsce zerowe   =%.3f ", x2);
		}
			else 
			{
				x1 = -b / (2 * a);
				printf("\nTylko jedno miejsce zerowe = %.3f\n", x2);
			}		
		}

//printf("podaj nowa);
//scanf();
return 1;
}
