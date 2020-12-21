///Aplicația 8.1: Se citește de la tastatură un număr natural n<=10.
///Se citesc apoi elementele întregi ale unei matrici a[n][n].
///Să se afișeze dacă matricea „a” este o matrice unitate. Notă: o matrice unitate are pe diagonala principală 1 și în rest 0.

//n linii m coloane
#include<stdio.h>

void citire(int a[10][10], int n, int m){
    int i,j;
    printf("Elemente: ");

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf("%d", &a[i][j]);

}
void afisare(int a[10][10], int n, int m){

int i,j;
for(i=0;i<n;i++){
    for(j=0;j<m;j++)
    printf("%3d",a[i][j]);
    printf("\n");
}
}
void matunitate(int a[10][10],int n,int m){
    int i,j, ok=1;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        if(i==j && a[i][j]!=1)
        ok=0;
    if(i!=j && a[i][j]!=0)
        ok=0;
    }
    if (ok==1)
        printf("Matricea nu este unitate.");
    else printf("Matricea este unitate.");
}
int main(){
    int a[10][10],n,m;
    printf("Nr linii: ");
    scanf("%d", &n);
    printf("Nr coloane: ");
    scanf("%d", &m);
    citire(a,n,m);
    afisare(a,n,m);
    matunitate(a,n,m);
}
