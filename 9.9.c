///Aplicația 9.9: Scrieţi o funcţie care parcurge un vector și returnează indicii elementelor minim şi maxim.
#include<stdio.h>
void citire(int v[], int n){
    int i;
    printf("Introduceti elementele vectorului: ");
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
}

void indice(int v[], int n)
{
int i,max=-10000,min=10000,indmax,indmin;
for(i=0;i<n;i++){
    if(v[i]>max){
        max=v[i];
      indmax=i;
    }

   if(v[i]<min){
    min=v[i];
    indmin=i;
   }
   }

      printf("Indicele minimului %d\n",indmin);
      printf("Indicele maximului %d",indmax);
    }

    int main(){
        int v[100],n;
        printf("Nr elemente: ");
        scanf("%d", &n);
        citire(v,n);
        indice(v,n);
    }
