///Aplicația 9.4: Să se scrie un program care citește un număr n<10 iar apoi citește 2 vectori v1 și v2 de câte n elemente de tip int.
///Pentru citirea elementelor unui vector se folosește o funcție citire(v,n).
///Se va implementa o funcție egal(v1,v2,n), care testează dacă toate elementele din v1 sunt egale cu cele din v2 la poziții corespondente.

#include<stdio.h>
void citire(int v[], int n){
int i;
printf("Elementele: ");
for(i=0;i<n;i++)
    scanf("%d", &v[i]);
    }
    void egale(int v1[], int v2[], int n){

        int i,j=-1,ok=1;

        for(i=0;i<n;i++){
                j++;
            if(v1[i]!=v2[j])
            ok=0;
        }
        if(ok==1)
            printf("Vectorii au elemente egale.");
        else
            printf("Vecorii NU au elemente egale.");
    }

    int main(){
        int v1[100],v2[100],n;
        printf("Numar elemente vectori: ");
        scanf("%d", &n);
        citire(v1,n);
        citire(v2,n);
        egale(v1,v2,n);
    }

