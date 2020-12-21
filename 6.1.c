///Aplicația 6.1: Să se afișeze câte elemente negative si pozitive sunt în vectorul {7, -5, 4, 3, -9, 2, -8}.


#include<stdio.h>


void numar(){
     int v[] = {7, -5, 4, 3, -9, 2, -8};
     int i, n = 7;
     int negative=0,pozitive=0;

     for(i=0; i<7;i++){
        if(v[i]<0){
        negative++;
        n--;
        }
     }

     printf("%d negative", negative);
     printf("\n%d pozitive", n);
}

int main(){

numar();
}
