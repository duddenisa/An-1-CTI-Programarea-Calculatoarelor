#include<stdio.h>


void citire(int v[],int n)
{
    int i;
printf("Elemente: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
}
int minim(int v[],int n, int x, int y)
{
    printf("Capete interval x,y: ");
    scanf("%d %d", &x,&y);
    int i,min=100000;
     for (i = 1; i < n; i++){
            if ((v[i] < min) && (v[i]>x && v[i]<y) )
                {
                min = v[i];
                }
}
return min;


}
int main()
{
    int v[10];
    int n, i, min,x,y;

    printf("Numarul de elemente: ");
    scanf("%d", &n);
    citire(v,n);



        printf("Minimul este %d", minim(v,n,x,y));

    return 0;
}
