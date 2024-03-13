#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  int i;
  int somadivisores=0;

  printf("digite um numero:");
  scanf("%d", &n);

  printf("os divisores de %d são:", n);

  for ( i = 1;i <= n; i++){
    if (n % i ==0){
      printf("\n%d", i);
      somadivisores+= i;
    }
  }
  
  if ((n*2) == somadivisores){
    printf(" \n%d é um numero perfeito", n);
} else {
    printf("\n%d não é um numero perfeito", n);
}
  
return 0;
}

