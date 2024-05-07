#include <stdio.h>
int main ()
{
    int a;
    int b=18;

    printf("inserisci la tua età:");
    scanf("%d", &a);

    if (a>b)
{
    printf("sei maggiorenne");

}
    else if(a==b)
     {
     printf("sei maggiorenne");
    }
    else
    {
    printf("sei minorenne");
    }
}
