///Aplicația 10.3: Se citește un n<=10 și apoi n nume de persoane, fiecare nume putând apărea de mai multe ori.
///Să se afișeze de câte ori apare fiecare nume.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[101][202];
    int aparitii[101]= {0},verificare[101]= {0};
    int n,i,j;
    printf("n=");
    scanf("%i",&n);
    for(i=0; i<n; i++)
        scanf("%s",s[i]);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(verificare[j])
                continue;
            if(strcmp(s[i],s[j])==0)
            {
                aparitii[i]++;
                verificare[j]=1;
            }
        }
    }
    for(i=0; i<n; i++)
        if(aparitii[i])
            printf("%s\n %i\n",s[i],aparitii[i]);

}
