#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  int i;

  printf("digite um numero:");
  scanf("%d", &n);

  printf("os divisores de %d são:", n);

  for ( i = 1;i <= n; i++){
    if (n % i ==0){
      printf("\n%d", i);
    }
    
    
    
    
  }
  
return 0;
}

