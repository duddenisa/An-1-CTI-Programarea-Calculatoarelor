///1 2 3
///4 5 6
///7 8 9
///Va deveni:
///1 4 7
///2 5 8
///3 6 9



#include<stdio.h>

void citire(int matrix[10][10], int rows, int cols){
    int i,j;
    printf("Elemente: ");
 for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)

            scanf("%d", (*(matrix + i) + j));

    }

void permutare(int matrix[10][10], int rows, int cols){
    int i,j,aux;
 for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
        if(i<j){
        aux=*(*(matrix + i) + j);
        *(*(matrix + i) + j)=*(*(matrix + j) + i);
        *(*(matrix + j) + i)=aux;
        }
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
    citire(matrix,rows,cols);
    permutare(matrix,rows,cols);
    afisare(matrix,rows,cols);
}
