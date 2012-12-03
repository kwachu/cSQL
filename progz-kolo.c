#include <stdio.h>

#include <stdlib.h>

#define r 20 



int main()

{



int i; //inkrementacja

int tabwe[r]; //tablica wejsciowa

int liczba,rt1,rt2; /*zmienne robocze: liczba - podzielnik tablicy We,

rt1/2 - rozmiary przyszlych tablic

*/



//tworzenie wartosci w tablicy wejsciowej

for (i=0;i<r;i++) tabwe[i]=i;





//wyswietla tablice wejsciowa tak jak zostala zadeklarowana

printf("Oto tablica na ktorej bedziemy pracowac\n");

for (i=0;i<r;i++)

{

    printf("Tab[%d] = %d \n",i,tabwe[i]);

}





//info dla uzytkownika + okreslenie liczby dzielacej tab WE

printf("Podaj warosc, wg. ktorej tablica zostanie podzielona na dwie tablice.\nLamacz tablicy = ");

scanf("%d",&liczba);

printf("\ntablica zostanie zlamana liczba = %d\n",liczba);





//okreslanie rozmiarow tablic wyjsciowych

for (rt1=0,rt2=0,i=0;i<r;i++)

{

    if (tabwe[i]<liczba) rt1++;

    else rt2++;

}

printf("mniejszych wartosci jest %d\nwiekszych wartosci jest %d\n",rt1,rt2);





//rezerwacja pamieci dla nowych tablic

int tabm[rt1],tabp[rt2];

rt1=0;

rt2=0;



//przeniesienie danych z tablicy wejsciowej do tablic wyjsciowych

for (i=0;i<r;i++)

{

    if (tabwe[i]<liczba) {

       tabm[rt1]=tabwe[i];

       rt1++;

       }

       

    else {

        tabp[rt2]=tabwe[i];

        rt2++;

        }  

}



//wyswietlanie tablic wyjsciowych



//wartosci mniejsze

printf("\nMniejsze wartosci niz %d w tab1\n",liczba);

for (i=0;i<rt1;i++)

{

    printf("tab1[%d]= %d\n",i,tabm[i]);

    if ((i+1)==rt1) printf("\n"); //po ostatniej wyswietlanej wartosci wstaw znak nowej lini

}

//wartosci pozostale (wieksze i rowne)

printf("\npozostale wartosci w tab2\n(od %d do %d)\n",liczba,(r-1));

for (i=0;i<rt2;i++)

{

    printf("tab2[%d]= %d\n",i,tabp[i]);

}







 system("PAUSE");

 return 0;

}


