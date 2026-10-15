#include <stdio.h>

int main(void){

    int escolha;
    int valorDeposito;
    int valorEmprestimo;

    puts ("--------------------------------");
    puts ("------------ Menu ---------");
    puts ("--------------------------------");

    printf("Escolha o assunto que deseja tratar:\n");
    
    puts ("--------------------------------");
   
    puts("1 - Ver Saldo na conta.");
    puts("2 - Fazer um depósito.");
    puts("3 - Valor disponivel para empréstimo.");
    puts("4 - falar com um atendente.");

    puts ("--------------------------------");

    printf("Digite a opção desejada: ");
    printf("Digite somente o numero da opção desejada: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            puts ("Você escolheu ver o saldo na conta.");
            puts ("O seu saldo é de 33.000,00 reais.");
            break;
        case 2:
            puts ("Você escolheu fazer um depósito.");
            printf("Digite o valor do depósito: ");
            scanf("%d", &valorDeposito);
            puts ("Depósito realizado com sucesso.");
            break;
        case 3:
            puts ("Você escolheu ver o valor disponivel para empréstimo.");
            puts ("Temos de R$ 5 reais a R$ 10.000 reais disponivel para empréstimo.");
            printf("Digite o valor que deseja pegar emprestado: ");
            scanf("%d", &valorEmprestimo);
            break;
        case 4:
            puts ("Você escolheu falar com um atendente.");
            break;
    }

    return 0;
}