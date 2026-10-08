#include <stdio.h>
int main(void){
    int opcao;
    char resposta;
    printf("-------------------------------\n");
    printf("Bem-Vindo ao Jogo do Loucão\n");
    printf("-------------------------------\n");
    printf("Você quer iniciar o jogo? (1 - Sim / 2 - Não)\n");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Iniciando o jogo...\n");
        
    } else {
        printf("Saindo do jogo. Até a próxima!\n");
    }

    printf("-------------------------------\n");

    printf("Pergunta: Qual é a capital da França?\n");
    printf("A) Londres\n", "B) Paris\n", "C) Roma\n", "D) Berlim\n");
    printf("Digite sua resposta (A, B, C ou D): ");
    scanf(" %c", &resposta);
    if(resposta == "b" || resposta == "B"){
        printf("Resposta correta!\n");
    } else {
        printf("Resposta incorreta.\n");
    }
    
    return 0;
}