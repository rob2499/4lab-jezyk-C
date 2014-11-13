#include <stdio.h>
#include <stdlib.h>

int main()
{
    char DniTygodnia[7][15] =
    {
        {"Poniedzialek"},
        {"Wtorek"},
        {"Sroda"},
        {"Czwartek"},
        {"Piatek"},
        {"Sobota"},
        {"Niedziela"}
    };

    int liczba=0;
    printf("Podaj liczbe w przedziale od 1 do 7: \n");
    scanf("%d",&liczba);
    switch(liczba)
    {
        case 1 : printf("%s\n",DniTygodnia[0]);break;
        case 2 : printf("%s\n",DniTygodnia[1]);break;
        case 3 : printf("%s\n",DniTygodnia[2]);break;
        case 4 : printf("%s\n",DniTygodnia[3]);break;
        case 5 : printf("%s\n",DniTygodnia[4]);break;
        case 6 : printf("%s\n",DniTygodnia[5]);break;
        case 7 : printf("%s\n",DniTygodnia[6]);break;
    }
    return 0;
}

/*
Zadeklaruj tablice DniTygodnia dla 7 nazw dni tygodnia:
"Poniedzialek", "Wtorek", "Sroda", "Czwartek", "Piatek", "Sobota"
oraz "Niedziela".
Skorzystaj z wczesniej napisanego programu, ktory dla podanej
liczby z przedzialu 1-7 wypisuje nazwe dnia tygodnia. Niech tym razem
wypisze ta nazwe tygodnia z tablicy DniTygodnia.
*/
