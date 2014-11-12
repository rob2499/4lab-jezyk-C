#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[5][3] = {
        {127,255,212},
        {233,107,5},
        {255,255,51},
        {227,231,230},
        {253,228,86}
    };

    int a,b,c,d,e;
    for(a=0;a<3;a++)
    {
        printf("%d ",tablica[0][a]);
        if(a==2)
        {
            printf("\tkolor akwamaryna\n");
        }
    }

    for(b=0;b<3;b++)
    {
        printf("%d ",tablica[1][b]);
        if(b==2)
        {
            printf("\tkolor ceglasty\n");
        }
    }

    for(c=0;c<3;c++)
    {
        printf("%d ",tablica[2][c]);
        if(c==2)
        {
            printf("\tkolor kanarkowy\n");
        }
    }

    for(d=0;d<3;d++)
    {
        printf("%d ",tablica[3][d]);
        if(d==2)
        {
            printf("\tkolor mysi\n");
        }
    }

    for(e=0;e<3;e++)
    {
        printf("%d ",tablica[4][e]);
        if(e==2)
        {
            printf("\tkolor piwny\n");
        }
    }
    return 0;
}

/*
Kolor RGB to trojka (r,g,b) liczb z przedzialu 0-255, gdzie
r - kolor czerwony
g - kolor zielony
b - kolor niebieski

Zadeklaruj tablice dla 5 kolorow, ktore maja odpowiednio kody:

(127,255,212)	- kolor akwamaryna
(233,107,5) 	- kolor ceglasty
(255,255,51)	- kolor kanarkowy
(227,231,230)	- kolor mysi
(253,228,86)	- kolor piwny
*/
