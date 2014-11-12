#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Imie[10];
    printf("Podaj swoje imie: \n");
    scanf("%s",Imie);
    printf("Czesc %s",Imie);
    return 0;
}

/*
Lancuch znakow (napis) w C jest tablica char-ów. Napisz program, ktory
deklaruje tablice na 10 znakow o nazwie Imie. Nastepnie, niech program
pyta uzytkownika o jego imie, zapisuje je do tablicy,  a nastepnie
wyswietla powitanie "Czesc <IMIE>", gdzie <IMIE> to podane przez
uzytkownika Imie.
*/
