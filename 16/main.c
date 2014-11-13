#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    printf("Podaj liczbe calkowita\n");
    scanf("%d",&n);

    int Macierz[n][n];
    int a;
    Macierz[0][0]=1;
    for(a=0;a<=n-1;a++)
    {
        Macierz[0][a+1]=0;
        printf("%d ",Macierz[0][a]);
    }
    printf("\n");

    /*-----------------------------------------*/

    for(a=1;a<n;a++)
    {
        Macierz[a][0]=1;
        printf("%d \n",Macierz[a][0]);
    }

    /*-----------------------------------------*/

    int i=0;
    for(a=2;a<n;a++)
    {
        if(1<=i)
        {
            Macierz[i][a] = Macierz[i-1][a] + Macierz[i-1][a-1];
            printf("%d",Macierz[i][a]);
        }
    }
    return 0;
}

/*
Napisz program, ktory pyta uzytkownika o liczbe calkowita N oraz
deklaruje tablice Macierz o rozmiarze N na N. Nastepnie uzupelnia
tablice wg ponizszego wzoru.


a) pierwszy wiersz to jedynka i N-1 zer, tzn.

[ 1, 0, 0, ....., 0]

b) pierwsza kolumna to same jedynki

c) pozostale elementy macierzy uzupelnij wg wzoru

Macierz[i][j] = Macierz[i-1][j] + Macierz[i-1][j-1]

dla wszystkich 1<= i,j < N.

Wyswietl uzupelniona tablice dla N=10 dbajac o wyrownanie liczb w
kolumnach. Pomin wyswietlanie zer.

Przyklad, dla N = 10

[   1                                     ]
[   1   1                                 ]
[   1   2   1                             ]
[   1   3   3   1                         ]
[   1   4   6   4   1                     ]
[   1   5  10  10   5   1                 ]
[   1   6  15  20  15   6   1             ]
[   1   7  21  35  35  21   7   1         ]
[   1   8  28  56  70  56  28   8   1     ]
[   1   9  36  84 126 126  84  36   9   1 ]

Czy poznajesz ten trojkat?

Okazuje sie, ze ma on bardzo ciekawa wlasnosc, ktora mozna sprawdzic
i przedstawic graficznie za pomoca naszego programu.
*/
