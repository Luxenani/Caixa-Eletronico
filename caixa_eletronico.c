/******************************************************************/
/*Aluno 1 : Pedro Guilherme Toloni Luxenani RA: 8162860*/
/*Aluno 2 : Igor Marcos da Silva RA: 8152698*/
/* Exercício-Programa 1 — Caixa Eletrônico */
/* Programação Avançada - 2024 - Professor: Bruno Perillo */
/* Compilador: ... (DevC++ ou gcc) versão ... */
/******************************************************************/
#include <stdio.h>

int deposito(){
    int q100, q50, q20, q10, q5, q2, q1, c100, c50, c20, c10, c5, c2, c1, saldo;

    //entrada da quantidade de notas
    printf("\nSelecione a quantidade de cedulas, o valor que quer depositar: \n");

    printf("Quantidade Cedulas de R$ 100,00 : ");
    scanf("%d", &q100);
    
    printf("Quantidade Cedulas de R$ 50,00 : ");
    scanf("%d", &q50);
    
    printf("Quantidade Cedulas de R$ 20,00 : ");
    scanf("%d", &q20);

    printf("Quantidade Cedulas de R$ 10,00 : ");
    scanf("%d", &q10);

    printf("Quantidade Cedulas de R$ 5,00 : ");
    scanf("%d", &q5);

    printf("Quantidade Cedulas de R$ 2,00 : ");
    scanf("%d", &q2);
    
    printf("Quantidade Cedulas de R$ 1,00 : ");
    scanf("%d", &q1);
    
    //atribuição de valor à quantidade das notas e soma pro saldo 
    saldo = c100 * 100 + c50 * 50 + c20 * 20 + c10 * 10 + c5 * 5 + c2 * 2 + c1 * 1;
    printf("O seu saldo eh de R$:%i\n", saldo);

    return saldo;
}

int saque(int saldo){   //pega o saldo do deposito
    int valor_saque;

    printf("\nDigite o valor a ser sacado R$: ");
    scanf("%d", &valor_saque);

    if (valor_saque <= saldo){
        saldo -= valor_saque;   // subtração do valor do saldo com o valor do saque
        printf("Saque realizado com sucesso!\n");
        printf("O seu novo saldo eh de R$:%i\n", saldo);
    } else {
        printf("Saque nao realizado, saldo insuficiente!!\n");
    }

    return saldo;
}

int main() {
    int op, saldo = 0; // saldo inicial como 0

    while (1) { // Loop para exibir o menu até que o usuário escolha sair
        printf("\nDigite sua opcao: ");
        printf("\n0 - Saque");
        printf("\n1 - Deposito");
        printf("\n2 - Fim\n");

        scanf("%d", &op);

        switch (op) {
            case 0:
                if (saldo > 0){
                    saldo = saque(saldo); // atualiza o saldo após saque
                }else printf("Saldo invalido");
                 
                break;

            case 1:
                saldo = deposito(); // atualiza o saldo após depósito
                break;

            case 2:
                printf("Fim do programa!!\n");
                return 0; // termina o programa

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    }

    return 0;
}
