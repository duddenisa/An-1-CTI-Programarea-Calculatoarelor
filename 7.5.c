///Aplicația 7.5: Să se afișeze minimul elementelor din vectorul {7, -5, 4, 3, -9, 2, -8} utilizând pointeri, fără indecși.



#include<stdio.h>

void minim(){
        int v[]={7, -5, 4, 3, -9, 2, -8} , *p, minim=v[0];

    for(p=v;p<v+7;p++){

        if(*p<minim)
            minim=*p;

    }
    printf("Minimul vectorului este %d\n",minim);



}


 int main(){
int v[7]={7, -5, 4, 3, -9, 2, -8},n;
     minim(v,n);
 }
