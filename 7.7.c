///Aplicația 7.7: Să se șteargă din vectorul {5, 8, 1, 4, 2, 6, 9} toate elementele pare, păstrând neschimbată ordinea elementelor,
///după care să se afișeze noul vector. Utilizați pointeri, fără indecși.

#include<stdio.h>


void stergere(){
        int v[]={5, 8, 1, 4, 2, 6, 9}, *p, n=7;
p=v;
     for(int i=0;i<n;i++){
              if(*(p+i)%2==0){
    for(int j=i;j<n;j++){
*(p+j)=*(p+j+1);
}
n--;
i--;
}
}

for(int i=0;i<n;i++)
    printf("%d ", *(p+i));
}

int main(){
    int v={5, 8, 1, 4, 2, 6, 9};
    stergere();

}
