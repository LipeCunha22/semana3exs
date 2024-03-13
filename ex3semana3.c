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
        // Verifica se o palpite � v�lido
        do {
            printf("Qual � o seu palpite? ");
            scanf("%d", &palpite);
            invalido = (palpite < 1 || palpite > 100);
            if (invalido) {
                printf("Por favor, insira um n�mero entre 1 e 100.\n");
            }
        } while (invalido);

        tentativa++;

        if (palpite < sorteado) {
            printf("Voc� chutou muito baixo.\n");
        } else if (palpite > sorteado) {
            printf("Voc� chutou muito alto.\n");
        } else {
            printf("Parab�ns, voc� acertou! O seu n�mero de tentativas foi %d.\n", tentativa);
            break;  // Sai do loop
        }

        // Verifica se o n�mero de tentativas excedeu o limite
        if (tentativa >= 5) {
            printf("Voc� excedeu o n�mero m�ximo de tentativas. O n�mero sorteado era: %d\n", sorteado);
            break;  // Sai do loop se o n�mero de tentativas exceder 5
        }

    } while (1);

    return 0;
}


