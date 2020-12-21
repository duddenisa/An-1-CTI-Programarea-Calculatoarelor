///Să se citească de la tastatură un număr n<=10 iar apoi n valori de tip int.
///Să se afișeze dacă toate valorile pozitive sunt pare.


#include<stdio.h>


int main(){

    int v[100],n,i,contor=0;

    printf("Nr elemente: ");

    while(1){

      scanf("%d", &n);
    if(n>10){
        printf("Incearca din nou: \n");
        continue;
    }
    else
        break;
    }
    printf("Elemente: ");
    for(i=0;i<n;i++)
    scanf("%d", &v[i]);


    for(i=0;i<n;i++){

        if(v[i]>0 && v[i]%2==0)
        contor++;

    }
if(contor==n)
    printf("Toate elementele indeplinesc conditia.");
    else
        printf("Nu toate elementele indeplinesc conditia.");

}
