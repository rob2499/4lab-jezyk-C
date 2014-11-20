#include <stdio.h>
#include <stdlib.h>

int odwrotnosc(char napis[20])
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

    int b;
    for(b=0;b<znaki;b++)
    {
        printf("%c",napis[znaki-b-1]);
    }
    return 0;
}

int main()
{
    char napis[20];
    printf("Podaj jakies slowo: \n");
    scanf("%[^\n]s",napis);

    odwrotnosc(napis);
    return 0;
}
/*
Napisz program, ktory pyta uzytkownika o lancuch znakow (maksymalnie 20),
a nastepnie wyswietla ten tekst w odwrotnej kolejnosci.
Na przyk³ad: napis "sysTemowy" powinien byc wyswietlony jako
"ywomeTsys". Skorzystaj z wczesniej napisanej funkcji dlugosc.
*/
