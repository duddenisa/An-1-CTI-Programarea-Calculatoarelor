///Aplicația 11.5: Jocul fazan: se citesc de la tastatură cuvinte separate prin spaţii albe (spaţiu, TAB sau ENTER), până la întâlnirea cuvântului vid. Pornind de la cuvintele citite, se construieşte un şir de caractere după următoarele reguli:
///- Primul cuvânt citit se adaugă la şirul de caractere
///- Fiecare din următoarele cuvinte citite se adaugă la şirul de caractere dacă ultimele două litere ale şirului coincid cu primele două litere ale cuvântului (nu se face distincţie între literele mici şi cele mari);
///Cuvintele adăugate la şirul de caractere sunt despărţite de caracterul ’-’. Să se afişeze şirul astfel construit. Programul va folosi alocare dinamică astfel încât spaţiul de memorie utilizat să fie minim.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char **l=NULL;
int nrLinii=0;
void eliberare()
{
    int i;
    for(i=0;i<nrLinii;i++)free(l[i]);
    free(l);
}
char *linie()
{
    char buf[201];
    char *p;
    size_t n;
    fgets(buf,201,stdin);
    buf[strcspn(buf,"\n")]='\0';
    n=strlen(buf)+1;
    if((p=(char*)malloc(n*sizeof(char)))==NULL){
        eliberare();
        printf("memorie insuficienta\n");
        exit(EXIT_FAILURE);
        }
    strcpy(p,buf);
    return p;
}

int main()
{
    char **linii2;
    char *p;
    int i,j;
    for(;;){
        p=linie();
        if(strlen(p)==0){
            free(p);
            break;
            }

        nrLinii++;
        if((linii2=(char*)realloc(l,nrLinii*sizeof(char)))==NULL)
        {
            eliberare();
            printf("memorie insuficienta\n");
            exit(EXIT_FAILURE);
            }
        l=linii2;
        l[nrLinii-1]=p;
        }
        printf("%s",l[0]);
        for(int i = 0; i < nrLinii ; i++)
     {
         if(l[i][strlen(l[i])-2] == l[i + 1][0] && l[i][strlen(l[i])-1] == l[i + 1][1])
         {
             printf("-%s",l[i+1]);
         }
         else
         {
             l[i+1]=l[i];
         }


     }
    free(p);
    eliberare();
    return 0;
}
