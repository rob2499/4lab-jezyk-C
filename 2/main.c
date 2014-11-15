#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lancuch[20];
    printf("Podaj jakies slowo\n");
    scanf("%s",lancuch);
    int a;
    for(a=0;a<20;a++)
    {
        if(lancuch[a]=='\0')
        {
            break;
        }
        if(lancuch[a+1]=='\0')
        {
            printf("%c",lancuch[a]);
        }
        else
        {
            printf("%c*",lancuch[a]);
        }
    }
    return 0;
}

/*
Napisz program, ktory pyta uzytkownika o lancuch znakow (maksymalnie 20),
a nastepnie wyswietla ten napis wstawiajac * pomiedzy litery napisu.
Na przyk³ad: napis Programowanie powinien byc wyswietlony
P*r*o*g*r*a*m*o*w*a*n*i*e

Zauwaz, ze po ostatniej literze nie ma znaku gwiazdki.
*/
