#include <stdio.h>
int main() // numeri primi
{
    int num;
    int c=0;
    int div;
    printf("inserisci un numetro");
    scanf("%d", &num);
    div=num-1;
    while(div>1)
    {
        if(num%div==0)
        {
            c=c+1;
        }

        div=div-1;
    }
    if(c==0)
    {
        printf("il tuo numero è primo");
    }
    else
    {
        printf("il tuo numero non è primo"); // int numeri[5]= {7,14,44,99,-31};
                                            // printf("%d", numeri[2]);
                                            //int i=o;
                                            //while(i<5) { printf ("%d\n", numeri [i]);
                                            
                                            
    }
}