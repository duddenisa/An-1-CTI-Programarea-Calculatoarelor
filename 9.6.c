///Aplicația 9.6: Cel mai mare divizor comun (cmmdc) al două numere a și b este definit recursiv astfel:
			///dacă a==b
///cmmdc(a-b,b)		dacă a>b
///cmmdc(a,b-a)		dacă b>a
///Să se scrie o funcție recursivă pentru calculul cmmdc și să se testeze aceasta pe două numere de la tastatură.


#include<stdio.h>

int cmmdc(int a, int b){
    if (a==b)
        return a;
    else
        if (a>b)
        cmmdc(a-b,b);
    else
        cmmdc(a,b-a);
}

int main(){

    int a,b;
    printf("Introduceti numerele: ");
    scanf("%d %d", &a,&b);
    printf("Cel mai mare divizor comun este : %d" ,cmmdc(a,b));
}
