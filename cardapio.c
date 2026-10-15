#include <stdio.h>
int main(void) {
    int opcao;

    puts ("--------------------------------");
    puts ("------------ Cardápio ---------");
    puts ("--------------------------------");
    puts ("1 - pizza de Calabrasa");
    puts ("2 - Pizza de camarão");
    puts ("3 - Pizza de Chocolate");
    puts ("4 - Banana Nevada");
    puts ("--------------------------------");

    printf("Escolha uma Opção: ");
        scanf("%d", &opcao);
  
    switch (opcao) {
        case 1:
            puts ("Você escolheu pizza de Calabrasa");
            break;
        case 2:
            puts ("Você escolheu pizza de camarão");
            break;
        case 3:
            puts ("Você escolheu pizza de Chocolate");
            break;
        case 4:
            puts ("Você escolheu Banana Nevada");
            break;
        default:
            puts ("Opção inválida");
            break;
    }
    return 0;
}