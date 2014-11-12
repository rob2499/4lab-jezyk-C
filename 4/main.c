#include <stdio.h>
#include <stdlib.h>

int dlugosc(char napis[20])
{
    int a=0,znaki=1;
    for(a=0;a<20;a++)
    {
        if(napis[a+1]=='\0')
        {
            break;
        }
        else
        {
            znaki++;
        }
    }
    return znaki;
}

int main()
{
    char napis[20];
    printf("Podaj jakies slowo: \n");
    scanf("%s",napis);

    printf("Dlugosc napisu to %d",dlugosc(napis));
    return 0;
}

/*
Napisz funkcje dlugosc, ktora przyjmuje lancuch znakow, a nastepnie
zwraca jego dlugosc. Skorzystaj z poprzedniego zadania.
*/
