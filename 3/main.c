#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20];
    printf("Podaj jakies slowo: \n");
    scanf("%s",napis);

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

    printf("Dlugosc napisu to %d",znaki);
    return 0;
}

/*
Napisz program, ktory pyta uzytkownika o lancuch znakow (maksymalnie 20),
a nastepnie wyswietla dlugosc tego napisu.
Na przyk³ad: dla napisu Programowanie powinien wyswietlic:
"Dlugosc napisu to 13"
*/
