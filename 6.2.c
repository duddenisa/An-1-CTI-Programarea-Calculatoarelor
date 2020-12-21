#include <stdio.h>

void citire(int v[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
}
int minim(int v[],int n)
{
    int i,imin=v[0];
     for (i = 1; i < n; i++){
            if (v[i] < imin)
                {
                imin = v[i];
                }
}
return imin;

}
int main()
{
    int v[10];
    int n, i, imin;

    printf("numarul de elemente: ");
    scanf("%d", &n);
    citire(v,n);



        printf("minimul este %d", minim(v,n));

    return 0;
}
