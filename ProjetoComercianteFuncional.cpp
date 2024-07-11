#include <stdio.h>

int main() {
    int n, i, ContLucroDez, ContLucroEntre, ContLucroAcima;
    char nome[300];
    float lucroporcento, totalcompra, totalvenda, lucrototal;
    float compra[300], venda[300], lucro[300];

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &n);

    totalcompra = 0;
    totalvenda = 0;

    for (i = 0; i < n; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome do produto: ");
        scanf("%s", nome); // Nome é lido mas não usado posteriormente
        printf("Preco da compra: ");
        scanf("%f", &compra[i]);
        printf("Preco da venda: ");
        scanf("%f", &venda[i]);
        totalcompra += compra[i];
        totalvenda += venda[i];
        lucro[i] = venda[i] - compra[i];
    }

    lucrototal = totalvenda - totalcompra;
    ContLucroDez = 0;
    ContLucroEntre = 0;
    ContLucroAcima = 0;

    for (i = 0; i < n; i++) {
        lucroporcento = lucro[i] * 100 / compra[i];
        if (lucroporcento < 10) {
            ContLucroDez++;
        } else if (lucroporcento <= 20) {
            ContLucroEntre++;
        } else {
            ContLucroAcima++;
        }
    }

    printf("\nLucro abaixo de 10%%: %d\n", ContLucroDez);
    printf("Lucro entre 10%% e 20%%: %d\n", ContLucroEntre);
    printf("Lucro acima de 20%%: %d\n", ContLucroAcima);
    printf("Valor total de compra da Linemar: R$ %.2f\n", totalcompra);
    printf("Valor total de venda da Linemar: R$ %.2f\n", totalvenda);
    printf("Lucro total da Linemar: R$ %.2f\n", lucrototal);

    printf("\nPressione Enter para sair...");
    getchar(); // Aguarda o Enter após o scanf
    getchar(); // Aguarda o Enter final

    return 0;
}

