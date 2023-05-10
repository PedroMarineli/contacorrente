#include <cstdio>
#include <iostream>

int menu() {
    int op;
    printf("\n[1] Dados do cliente\n[2] Saldo\n[3] Cheque Especial\n[4] Saque\n[5] Depósito\n[6] Aplicação Financeira\n[7] Aquisição Cartão de crédito\n[8] Pagamento do Cartão de Crédito\n[9] Fim do Programa\n");
    scanf("%d", &op);
    return op;
}
int main() {
    int numC, x = 0, op; char nome; float sal = 0, esp = 0;

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
        } 
        if (op == 2) {
            printf("Saldo cliente: R$%.2f\n", sal);
            printf("Limite de Chque Especial: R$%.2f\n", esp);
        }       
        if (op == 3) {
            printf("Escolha o valor do chque especial: \n");
            scanf("%f", &esp);
            printf("Valor de %.2f adicionado com sucesso!", esp);
        }
    }
}