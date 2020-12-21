#include <stdio.h>

int main()
{
    double a;
    double b;
    double *p,*r;
    p=&a; r=&b;

    printf("a= ");
    scanf("%lf", a);
    printf("b= ");
    scanf("%lf", b);





if(r>p)
    printf("&a= %p",r);
    else
    printf("&b= %p",p);

}

