#include <stdio.h>
int main()
{
    int nascita;

    printf( "inseriscio anno di nascita");

    scanf("%d", &nascita);

    if (nascita==1969)
    {
        printf(" sei nato lo stesso anno in cui l'uomo è andato per la prima volta sulla luna");
    }

    else if( nascita<1969)
    {
        printf(" sei nato");
        printf("1969-nascita = %d/n", 1969-nascita);
        printf("anni prima dell'anno in cui l'uomo è andato sulla luna");
    }
    else if(nascita>1969)
    {
        printf("sei nato %d", nascita-1969);
        printf("anni dopo il primo allunaggio sulla luna");
    }
}