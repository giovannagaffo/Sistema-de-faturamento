#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codigos[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int qtdvend[8], cod, qtd, indcorreto, i;
    char nome[8][20] = {"Areia Fina", "Areia Média", "Areia Grossa", "Pedra 1", "Cimento", "Cal", "Tábua Bruta", "Tijolo Baiano"};
    float preco[8] = {118.70, 95.80, 83.50, 60.00, 23.00, 15.00, 3.80, 1.70};
    float valvend[8], valtotal;
    char class;

    qtdvend[8] = 0;
    valvend[8] = 0;
    valtotal = 0;

    while (1) {
        printf("Digite o código do produto, ou '0' para encerrar: ");
        scanf("%d", &cod);

        if (cod == 0)
            break;

        if (cod > 8) {
            printf("Código do produto não deve ser maior que *\n");
            continue;
        }

        do {
            printf("Digite a quantidade vendida: ");
            scanf("%d", &qtd);

            if (qtd == 0) {
                printf("A quantidade vendida não pode ser igual a 0.\n");
            }
        } while (qtd == 0);

        indcorreto = cod - 1;
        qtdvend[indcorreto] = qtdvend[indcorreto] + qtd;
    }

    printf("Vendas do dia:\n");

    for (i = 0; i < 8; i++) {
        if (qtdvend[i] > 0) {
            valvend[i] = qtdvend[i] * preco[i];
            valtotal = valtotal + valvend[i];

            if (valvend[i] <= 5001)
                class = 'C';
            else if (valvend[i] > 5001 && valvend[i] <= 10001)
                class = 'B';
            else
                class = 'A';

            printf("%d | %s | %d | %.2f | %.2f | %c\n", codigos[i], nome[i], qtdvend[i], preco[i], valvend[i], class);
        }
        
    }

    printf("Valor total de vendas do dia: R$ %.2f\n", valtotal);
}