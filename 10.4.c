#include<stdio.h>
#include <ctype.h>
#include <string.h>

 int f[124];
int main()
{
    char s[100];
    int i,k=0,n;

     n=strlen(s);
    printf("Introduceti sirul de caractere: ");
    fgets(s,100,stdin);


    for(i=0;i<n;i++)
        f[s[i]]++;

    for(i=65;i<123;i++){
    if(f[i]!=0)
    printf("litera %c pare de %d ori \n", i, f[i]);
    }

}
