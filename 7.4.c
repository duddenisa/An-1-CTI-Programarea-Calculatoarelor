///7.4

#include <stdio.h>

 void citireVector(int v[], int n) {
     int *p;
     p=v;
     printf("Introduceti elemente: ");
      for(p=v;p<v+n;p++){
        scanf("%d",p);
        }



 }

void negative(int v[], int n){
    int *p;
    p=v;
    for (p=v;p<n+v;p++){
        if(*p<0)
            nr++;
    }
    printf("In vector se afla %d nr negative\n",nr);

}
int main()
{
    int v[100],n;
    printf("Nr elemente: ");
    scanf("%d",&n);
    citireVector(v,n);
    negative(v,n);

}
