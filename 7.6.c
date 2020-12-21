///Aplicația 7.6: Se citește un număr n (n<=10) și apoi n numere întregi.
///Se cere să se sorteze aceste numere în ordine descrescătoare utilizând pointeri, fără indecși. (Inclusiv citirea se va face cu pointeri.)


#include <stdio.h>

void citire(int v[],int n)
{
    int *p;
    printf("Elemente: ");

    for(p=v;p<v+n;p++)

        scanf("%d",p);

}

void sortare(int v[],int n)
{
    int *p,*r,aux;
    for(p=v;p<v+n;p++)
    {
        for(r=p+1;r<v+n;r++){
        if(*p<*r){
                aux=*p;
                *p=*r;
                *r=aux;
            }
        }}}

void afisare(int v[],int n)
{
    int *p;
    for(p=v;p<v+n;p++)
    {
        printf("%d ", *p);
    }
}
int main()
{
    int n,v[100];
    printf("Nr. elemente: ");
    scanf("%d", &n);
    citire(v,n);
    sortare(v,n);
    afisare(v,n);
    return 0;
}
