#include <stdio.h>
#include <stdlib.h>
int main(){
int n = 10;
printf ("numero de estrellas:\n");
scanf("%d", &n);
for (int i=0; i <=n; i++){
for (int k = 0; k <= n - i; k++)
printf(" ");

for (int j = 0; j < i; j++)
printf("* ");

printf("\n");
}
}
