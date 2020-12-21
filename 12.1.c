#include<stdio.h>

int main(){
typedef struct {
    int x,y;} punct;
    punct v[10];
int n;
int i;
scanf("%d", &n);

printf("Introduceti coordonate: ");
for(i=0;i<n;i++){
    printf("x= ");
    scanf("%d", &v[i].x);
    printf("y= ");
    scanf("%d", &v[i].y);
}

for(i=0;i<n;i++){
    printf("%d", v[i].x);
    printf("%d", v[i].y);
}
}
