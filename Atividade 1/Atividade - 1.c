// 01 - Considere a seguinte estrutura (0,3 pontos):
// struct Funcionario {
// int registro;
// float salario;
// char nome[30];
// }
// Escreva um programa que implemente essa estrutura.



#include <stdio.h>

struct Funcionario {
    int registro;
    float salario;
    char nome[30];
};

int main() {
    struct Funcionario funcionario;

    // Preenchendo os dados do funcionário
    printf("Digite o registro do funcionário: ");
    scanf("%d", &funcionario.registro);

    printf("Digite o salário do funcionário: ");
    scanf("%f", &funcionario.salario);

    printf("Digite o nome do funcionário: ");
    scanf("%s", funcionario.nome);

    // Exibindo os dados do funcionário
    printf("\nDados do funcionário:\n");
    printf("Registro: %d\n", funcionario.registro);
    printf("Salário: %.2f\n", funcionario.salario);
    printf("Nome: %s\n", funcionario.nome);

    return 0;
}
