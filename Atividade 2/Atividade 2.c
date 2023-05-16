#include <stdio.h>

struct Carro {
    char marca[30];
    char modelo[30];
    int anoFabricacao;
    char cor[20];
    float preco;
};

int main() {
    struct Carro carro;

    // Preenchendo os dados do carro
    printf("Digite a marca do carro: ");
    scanf("%s", carro.marca);

    printf("Digite o modelo do carro: ");
    scanf("%s", carro.modelo);

    printf("Digite o ano de fabricação do carro: ");
    scanf("%d", &carro.anoFabricacao);

    printf("Digite a cor do carro: ");
    scanf("%s", carro.cor);

    printf("Digite o preço do carro: ");
    scanf("%f", &carro.preco);

    // Imprimindo o relatório com os dados do carro
    printf("\nRelatório do Carro:\n");
    printf("Marca: %s\n", carro.marca);
    printf("Modelo: %s\n", carro.modelo);
    printf("Ano de Fabricação: %d\n", carro.anoFabricacao);
    printf("Cor: %s\n", carro.cor);
    printf("Preço: R$ %.2f\n", carro.preco);

    return 0;
}
