#include <stdio.h>

struct Pessoa {
    long int cpf;
    char nome[50];
    int idade;
    char endereco[100];
};

void ler_pessoa(struct Pessoa *pessoa) {
    printf("Digite o CPF: ");
    scanf("%ld", &(pessoa->cpf));

    printf("Digite o nome: ");
    scanf(" %[^\n]", pessoa->nome);

    printf("Digite a idade: ");
    scanf("%d", &(pessoa->idade));

    printf("Digite o endereco: ");
    scanf(" %[^\n]", pessoa->endereco);
}

void mostrar_pessoa(struct Pessoa pessoa) {
    printf("\nDados da Pessoa:\n");
    printf("CPF: %ld\n", pessoa.cpf);
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s\n", pessoa.endereco);
}

int main() {
    struct Pessoa pessoa;

    printf("Ler dados da pessoa:\n");
    ler_pessoa(&pessoa);

    printf("\nMostrar dados da pessoa:\n");
    mostrar_pessoa(pessoa);

    return 0;
}
