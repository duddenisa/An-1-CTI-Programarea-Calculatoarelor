#include<stdio.h>


void afisare(int v[],int n,int i){

    if(i==n+1)
        return;
        printf("%d",v[i]);

    afisare(v,n,i++);
    }


int main(){
    int v[]={1,2,3,4,5}, n=5;
    afisare(v,n,0);
}
