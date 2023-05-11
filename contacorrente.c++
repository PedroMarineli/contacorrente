#include <cstdio>
#include <iostream>

int menu() {
    int op;
    printf("\n[1] Dados do cliente\n[2] Saldo\n[3] Cheque Especial\n[4] Saque\n[5] Depósito\n[6] Aplicação Financeira\n[7] Aquisição Cartão de crédito\n[8] Pagamento do Cartão de Crédito\n[9] Fim do Programa\n");
    scanf("%d", &op);
    return op;
}
int main() {
    int numC, x = 0, op, val_cart = 0; char nome[30]; float sal = 0, esp = 0, saq, adc, fun, cre, div;

        printf("Digite o número da conta: \n");
        scanf("%d", &numC);

        printf("Digite seu nome: \n");
        scanf("%s", &nome);

    while (x == 0) {
        op = menu();
        if (op == 1) {
                printf("Digite o número da conta: \n");
                scanf("%d", &numC);

                printf("Digite seu nome: \n");
                scanf("%s", &nome);

                sal = 0;
                esp = 0;
        } 
        if (op == 2) {
            printf("Saldo cliente: R$%.2f\n", sal);
            printf("Limite de Cheque Especial: R$%.2f\n", esp);
            printf("Saldo para saque: R$%.2f\n", sal + esp);
        }       
        if (op == 3) {
            printf("Escolha o valor do cheque especial: \n");
            scanf("%f", &esp);
            printf("Valor de %.2f adicionado com sucesso!", esp);
        }
        if (op == 4) {
            printf("Valor a ser retirado:\n");
            scanf("%f", &saq);
            if (saq <= (sal+esp)) {
                sal = sal - saq;
                if ((sal - saq) < 0) {
                    esp = esp + sal;
                    sal = 0;
                }
            }else {
                printf("Você não possui limite suficiente para o saque.");
            }
        }
        if (op == 5) {
            printf("Valor a adicionar:\n");
            scanf("%f", &adc);
            sal = sal + adc;
            printf("Valor de %.2f adicionado com sucesso!", adc);
        }
        if (op == 6) {
            printf("Valor para aplicar em fundos:\n");
            scanf("%f", &fun);
            if (fun <= sal) {
                fun = fun * 0.005;
                sal = sal + fun;
                printf("Valor aplicado com sucesso!\n");
            }else {
                printf("Saldo insuficiente para a aplicação.\n");
            }
        }
        if (op == 7) {
            if (val_cart == 0) {
                printf("%s conta %d tem direito a um cartão de crédito.\n", nome, numC);
                printf("Você deseja adquirir um cartão de crédito?\nPara SIM digite 1. Para NÃO digite 0\n");
                scanf("%d", &val_cart);
                if (val_cart == 1) {
                    printf("Cartão adquirido com sucesso!\n");
                }else {
                    printf("O cartão não foi adquirido.\n");
                }
            }else {
                printf("Você já possui cartão de crédito.\n");
            }
        }
        if (op == 8) {
            printf("Valor a ser pago:\n");
            scanf("%f", &cre);
            sal = sal - (cre - div);
            div = 0;
            printf("Valor foi descontado com sucesso!");
            if ((sal - cre) < 0) {
                div = sal;
                sal = 0;
                printf("Dívida: %.2f", div);
            }
        }
        if (op == 9) {
            break;
        }
    }
}