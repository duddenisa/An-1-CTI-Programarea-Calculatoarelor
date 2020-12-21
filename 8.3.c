///Aplicația 8.3: Se citește de la tastatură un număr n<=10 și un număr m<=20.
///Se cere să se scrie un program care generează o matrice cu m linii și n coloane în care sunt puse toate numerele de la 1,2,3,...,m*n.
///Se vor utiliza pointeri.

#include<stdio.h>

void valoare(int matrix[10][10], int rows, int cols){
        int i,j,k=1;

for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
        *(*(matrix+i)+j)=k;
        k++;
        }
}}

void afisare(int matrix[10][10], int rows, int cols){
        int i,j;
for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++)
            printf("%d ", *(*(matrix + i) + j));
        printf("\n");
}}

int main(){
    int rows,cols,matrix[10][10];
printf("Linii: ");
    scanf("%d", &rows);
    printf("Coloane: ");
    scanf("%d", &cols);
    valoare(matrix,rows,cols);
    afisare(matrix,rows,cols);
}

