#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[255];
char b[255]={"supertajnehaslo"};
int CzyToSamo(const char* a,const char* b)
{
    if(strcmp(a, b)==0)
    {
        return printf("Zalogowano do super tajnego systemu");
    }
    else
    {
        return printf("Bledne haslo");
    }
    return 0;
}

int main()
{
    printf("Podaj haslo: \n");
    scanf("%s",a);

    CzyToSamo(a,b);
    return 0;
}

/*
Napisz funkcje CzyToSamo, ktora ma dwa argumenty - lancuchy znakow,
a nastepnie zwraca 1 jesli oba napisy sa takie same, lub 0 gdy sa rozne.

Wykorzystaj nastepnie funkcje CzyToSamo, aby napisac kompletny program,
ktory:
a) pyta uzytkownika o haslo (lancuch znakow)
b) sprawdza, czy haslo jest rowne "supertajnehaslo"
oraz wypisuje odpowiednio
"Zalogowano do super tajnego systemu" lub "Bledne haslo".
*/
