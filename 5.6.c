
/*Aplicația 5.6: Se citesc două numere întregi n și m, cu m>0 și n>m. Să se afișeze n numere care cresc de la 0 din 1 în 1 și dacă trec de m redevin 0,
/// ciclul repetându-se. Exemplu pentru n==14 și m==3:
0 1 2 3 0 1 2 3 0 1 2 3 0 1*/


#include<stdio.h>

int main(){

    int n,m,i,j,nr=m,pas=0;
    printf("n= ");
    scanf("%d", &n);
    printf("m= ");
    scanf("%d", &m);


    for(i=1;i<n;i=i+nr){
        nr=0;
    while(nr<=m)
    {
        printf("%d ",nr );
        pas++;
        nr++;
        if(pas==n)
            break;
    }
    }
    }


