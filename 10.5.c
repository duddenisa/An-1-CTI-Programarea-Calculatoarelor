///Aplicația 10.5: Se citește n din intervalul [3,10] și apoi n nume de persoane.
///Să se concateneze primele n-1 nume folosind „, ”, ultimul nume cu „ si ”, iar apoi să se adauge „invata.”. Să se afișeze propoziția rezultată.
///Exemplu: n=3, numele: Ion Ana Maria
///Propoziție rezultata: Ion, Ana și Maria invata.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[101];
    char a[500]= {0};
    int n,i;
    printf("n=");
    scanf("%i",&n);
    for(i=0; i<n-2; i++)
    {
        scanf("%s",s);
        strcat(a,s);
        strcat(a,",");
    }
    scanf("%s",s);
    strcat(a,s);
    strcat(a," si ");
    scanf("%s",s);
    strcat(a,s);
    strcat(a, " invata. ");
    printf("%s",a);

}
