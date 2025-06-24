

#include <stdio.h>

int main() {
    int idade, nome, parcelas, parcelas2;
    float renda;

    printf("\n\tInsira a sua idade:");
    scanf("%i", &idade);
    while (idade < 18 || idade > 130) {
        printf("\n\t idade não aceita!");
        printf("\n\tInsira a sua idade novamente:");
        scanf("%i", &idade);
    }


    printf("\n\tInsira a sua renda:");
    scanf("%f", &renda);
    while (renda < 0) {
        printf("\n\t Valor não aceito!");
        printf("\n\tInsira a sua renda novamente:");
        scanf("%f", &renda);
    }

    printf("\n\tInsira a suas parcelas, que estão atrasadas:");
    scanf("%i", &parcelas);
    while (parcelas < 0) {
        printf("\n\t parcelas não aceitas!");
        printf("\n\tInsira a suas parcelas novamente:");
        scanf("%i", &parcelas);
    }

    printf("\n\tInsira a suas parcelas, que estão atrasadas (2 anos):");
    scanf("%i", &parcelas2);
    while (parcelas2 < 0) {
        printf("\n\t Parcelas em atraso, não aceitas!");
        printf("\n\tInsira a suas parcelas em atraso (2 anos), novamente:");
        scanf("%i", &parcelas2);
    }

    printf("\n\tO seu nome está negativado?(1 = Sim 0 = Não)? ");
    scanf("%i", &nome);
    while (nome < 0 || nome > 1) {
        printf("\n\t Insira apenas 0 ou 1!");
        printf("\n\t:O seu nome está negativado?(1 = Sim 0 = Não)?");
        scanf("%i", &nome);
    }

    if (renda < 2000 && idade < 18 && idade > 70 && nome == 1 && parcelas < 2) {
        printf("\n\t Empréstimo negado!");
    } else if (renda > 2000 && renda < 5000 && parcelas2 <= 2 && nome == 0 ) {
        printf("Empréstimo de baixo valor.(Até 5000");
    } else if (renda > 5000 && renda < 10000 && parcelas2 <= 4 && parcelas == 0 && nome == 0) {
        printf("\n\t Empréstimo de médio valor. (Até 20000)");
    } else if (renda > 10000 && parcelas == 0 && nome == 0) {
        printf("\n\t Empréstimo de alto valor (Acima de 200000)");
    }





    return 0;
}