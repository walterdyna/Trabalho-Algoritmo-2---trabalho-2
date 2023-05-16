#include <stdio.h>

struct Contato {
    char nome[50];
    char email[50];
    char telefone[20];
};

int main() {
    struct Contato agenda[100];
    int opcao, totalContatos = 0;

    do {
        printf("\nMenu de Opções:\n");
        printf("1 - Adicionar Contato\n");
        printf("2 - Mostrar Todos os Contatos\n");
        printf("3 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (totalContatos < 100) {
                    printf("\nAdicionar Contato:\n");
                    printf("Digite o nome: ");
                    scanf("%s", agenda[totalContatos].nome);

                    printf("Digite o e-mail: ");
                    scanf("%s", agenda[totalContatos].email);

                    printf("Digite o telefone: ");
                    scanf("%s", agenda[totalContatos].telefone);

                    totalContatos++;
                    printf("Contato adicionado com sucesso!\n");
                } else {
                    printf("A agenda está cheia!\n");
                }
                break;
            case 2:
                printf("\nLista de Contatos:\n");
                for (int i = 0; i < totalContatos; i++) {
                    printf("Contato %d:\n", i + 1);
                    printf("Nome: %s\n", agenda[i].nome);
                    printf("E-mail: %s\n", agenda[i].email);
                    printf("Telefone: %s\n", agenda[i].telefone);
                    printf("\n");
                }
                break;
            case 3:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida! Digite novamente.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}
