#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
int sorteado;
int tentativa=0;
bool acertou= true;
bool invalido=false;

srand(time(NULL));
sorteado = rand()%100 + 1;

int palpite;
printf("qual eh o seu palpite? ");
scanf("%d", &palpite);
  while(invalido){
    printf("qual eh o seu palpite?");
    scanf("%d", &palpite);
    invalido = (palpite<1 || palpite>100);
    if(invalido){
      printf("por favor, insira um numero entre 1 e 100");
    }
  }
  tentativa++;


if(palpite > sorteado){
    printf("chutou muito alto, o numero correto eh: %d, tente de novo! ",sorteado);

}
if (palpite<sorteado){
    printf("chutou muito baixo, o numero correto eh: %d, tente de novo! ",sorteado);
}
if (palpite==sorteado){
    printf("parabens, voce acertou!");
}


return 0;
}

