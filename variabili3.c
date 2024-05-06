#include <stdio.h>

int main ()
{
    int a=2;
    int b=5;
    float c= 2.612;
    float d= 8.9877654357689;
    double e= 29.09876453246578668896;
    double f=68876.98976532456787;
    int differenza =a-b;

    printf("somma: %d\n", a+b);
    printf("diff.:%d\n", differenza);
    printf("divisione:%f\n", b/c);
    printf("moltiplicazione:%.12lf/n,", e*f);
    
}