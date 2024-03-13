#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    int sorteado;
    int tentativa = 0;
    bool invalido = false;

    srand(time(NULL));
    sorteado = rand() % 100 + 1;

    int palpite;

    do {
        // Verifica se o palpite é válido
        do {
            printf("Qual é o seu palpite? ");
            scanf("%d", &palpite);
            invalido = (palpite < 1 || palpite > 100);
            if (invalido) {
                printf("Por favor, insira um número entre 1 e 100.\n");
            }
        } while (invalido);

        tentativa++;

        if (palpite < sorteado) {
            printf("Você chutou muito baixo.\n");
        } else if (palpite > sorteado) {
            printf("Você chutou muito alto.\n");
        } else {
            printf("Parabéns, você acertou! O seu número de tentativas foi %d.\n", tentativa);
            break;  // Sai do loop
        }

        // Verifica se o número de tentativas excedeu o limite
        if (tentativa >= 5) {
            printf("Você excedeu o número máximo de tentativas. O número sorteado era: %d\n", sorteado);
            break;  // Sai do loop se o número de tentativas exceder 5
        }

    } while (1);

    return 0;
}


