///Aplicația 6.7:
/// Se citește un număr n (n<=10) și apoi n numere întregi.
///Se cere să se sorteze aceste numere astfel încât numerele impare să fie înaintea celor pare.

#include<stdio.h>

void aranjare(int v[],int n){
    int i,k=0,aux[100];
   for(i=0;i<n;i++){
    if(v[i]%2==1){
    aux[k]=v[i];
    k++;
}
}

    for(i=0;i<n;i++){
    if(v[i]%2==0){
    aux[k]=v[i];
    k++;
}
}
printf("Vectorul ordonat este: ");
        for(i=0;i<k;i++)
        printf("%d ", aux[i]);
}
int main(){
    int v[100],n;
    int i;

    printf("Nr. elemente: ");
    scanf("%d" ,&n);
    printf("Elemente: ");
    for(i=0;i<n;i++)
    scanf("%d",&v[i]);

    aranjare(v,n);
}


