///Aplicația 6.6:
///Să se citească de la tastatură un număr n<=5 iar apoi n valori de tip float.
///Să se afișeze toate valorile ale căror modul (valoare absolută) este strict mai mare decat 10.


#include<stdio.h>


void citire(float v[],int n)
{
    int i;
printf("Elemente: ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&v[i]);
    }
}

void functie(float v[], int n){
int i;
    for(i=0;i<n;i++)
        if((int)v[i] >10)
        printf("%f ", v[i]);
}


int main(){


float v[5];
    int n, i;

    printf("Numarul de elemente: ");
    scanf("%d", &n);
    citire(v,n);
    functie(v,n);


}

