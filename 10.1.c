
///Aplicația 10.1: Să se citească o linie de la tastatură.
///Linia conține cuvinte care sunt formate doar din litere, cuvintele fiind despărțite prin orice alte caractere ce nu sunt litere.
///Să se capitalizeze prima literă din fiecare cuvânt și să se afișeze șirul rezultat.


#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[100];
    int i;
    fgets(s,100,stdin);
    if(isalpha(s[0]))
      s[0]=toupper(s[0]);

        for(i=0;i<strlen(s);i++){
            if(islower(s[i]) && s[i-1]==' ')

                s[i]=toupper(s[i]);

        }

    printf("%s", s);
}

