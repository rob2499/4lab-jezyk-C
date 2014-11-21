#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tab[20];
    printf("Podaj lancuch znakow\n");
    scanf("%s",tab);

    int a;
    int iloscznakow=1;
    for(a=0;a<20;a++)
    {
        if(tab[a+1]=='\0')
        {
            break;
        }
        else
        {
            iloscznakow++;
        }
    }

    int srodek;
    srodek=(iloscznakow+1)/2;

    for(a=0;a<iloscznakow;a++)
    {
        if(tab[a]!=tab[iloscznakow-a-1])
        {
            return printf("Podany wyraz nie jest palindromem.");
        }

        if(srodek==a)
        {
            return printf("Podany wyraz jest palindromem.");
        }
    }

    return 0;
}

/*
Napisz program, ktory pyta uzytkownika o lancuch znakow (maksymalnie 20),
a nastepnie sprawdza, czy wprowadzony tekst jest palindromem.
Wypisz odpowiedni komunikat.
Na przyk³ad: dla tekstu kajak powinien wypisac, ze jest to palindrom.


*) (dla chetnych) Zmodyfikuj program tak, aby przy sprawdzaniu czy
wprowadzony tekst jest palindromem pomijal spacje.
Na przyk³ad: jesli wprowadzony zostanie tekst
"Zakopane na pokaz" program powinien potwierdzic ze jest to palindrom.
*/
