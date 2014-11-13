#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[4][10];
    int a=0;
    for(a=0;a<10;a++)
    {
        tablica[0][a]=1;
        printf("%d ",tablica[0][a]);
    }
    printf("\n");

    for(a=0;a<10;a++)
    {
        tablica[1][a]=1;
        printf("%d ",tablica[1][a]);
    }
    printf("\n");

    for(a=0;a<10;a++)
    {
        tablica[2][a]=1;
        printf("%d ",tablica[2][a]);
    }
    printf("\n");

    for(a=0;a<10;a++)
    {
        tablica[3][a]=1;
        printf("%d ",tablica[3][a]);
    }
    printf("\n\n");

    /*-----------------------------------------*/

    for(a=0;a<10;a++)
    {
        tablica[0][a]=1;
        printf("%d ",tablica[0][a]);
    }
    printf("\n");

    for(a=0;a<10;a++)
    {
        tablica[1][a]=2;
        printf("%d ",tablica[1][a]);
    }
    printf("\n");

    for(a=0;a<10;a++)
    {
        tablica[2][a]=3;
        printf("%d ",tablica[2][a]);
    }
    printf("\n");

    for(a=0;a<10;a++)
    {
        tablica[3][a]=4;
        printf("%d ",tablica[3][a]);
    }
    printf("\n\n");

    /*-----------------------------------------*/

    for(a=0;a<10;a++)
    {
        tablica[0][a]=a+1;
        printf("%d\t",tablica[0][a]);
    }
    printf("\n");

    for(a=0;a<10;a++)
    {
        tablica[1][a]=2*a+2;
        printf("%d\t",tablica[1][a]);
    }
    printf("\n");

    for(a=0;a<10;a++)
    {
        tablica[2][a]=3*a+3;
        printf("%d\t",tablica[2][a]);
    }
    printf("\n");

    for(a=0;a<10;a++)
    {
        tablica[3][a]=4*a+4;
        printf("%d\t",tablica[3][a]);
    }
    printf("\n\n");

    /*-----------------------------------------*/

    int b=0;
    for(a=0;a<10;a++)
    {
        tablica[0][a]=++b;
        printf("%d\t",tablica[0][a]);
    }
    printf("\n");

    for(a=0;a<10;a++)
    {
        tablica[0][a]=++b;
        printf("%d\t",tablica[0][a]);
    }
    printf("\n");

    for(a=0;a<10;a++)
    {
        tablica[0][a]=++b;
        printf("%d\t",tablica[0][a]);
    }
    printf("\n");

    for(a=0;a<10;a++)
    {
        tablica[0][a]=++b;
        printf("%d\t",tablica[0][a]);
    }
    printf("\n\n");

    /*-----------------------------------------*/

    return 0;
}

/*
Napisz program, ktory deklaruje tablice o wymiarze 4x10, a nastepnie:

a) uzupelnia wszystkie pola tej tablicy wartoscia 1. Wypisz tablice na
ekranie.

[  1  1  1  1  1  1  1  1  1  1 ]
[  1  1  1  1  1  1  1  1  1  1 ]
[  1  1  1  1  1  1  1  1  1  1 ]
[  1  1  1  1  1  1  1  1  1  1 ]

b) zmienia elementy tablicy wg ponizszego wzoru. Wypisz zmodyfikowana
tablice na ekranie

[  1  1  1  1  1  1  1  1  1  1 ]
[  2  2  2  2  2  2  2  2  2  2 ]
[  3  3  3  3  3  3  3  3  3  3 ]
[  4  4  4  4  4  4  4  4  4  4 ]

c) zmienia elementy tablicy wg ponizszego wzoru. Wypisz zmodyfikowana
tablice na ekranie oraz zadbaj o wyrownanie kolumn.

[  1  2  3  4  5  6  7  8  9 10 ]
[  2  4  6  8 10 12 14 16 18 20 ]
[  3  6  9 12 15 18 21 24 27 30 ]
[  4  8 12 16 20 24 28 32 36 40 ]


d) zmienia elementy tablicy wg ponizszego wzoru. Wypisz zmodyfikowana
tablice na ekranie

[  1  2  3  4  5  6  7  8  9 10 ]
[ 11 12 13 14 15 16 17 18 19 20 ]
[ 21 22 23 24 25 26 27 28 29 30 ]
[ 31 32 33 34 35 36 37 38 39 40 ]
*/
