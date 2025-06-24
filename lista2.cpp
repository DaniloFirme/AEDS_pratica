
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo = fopen("cenagrafica.txt", "w");
    if (!arquivo) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    int opcao;
    while (1) {
        printf("\nEscolha uma figura:\n");
        printf("1 - Quadrado\n");
        printf("2 - Retângulo\n");
        printf("3 - Triângulo\n");
        printf("4 - Cubo\n");
        printf("5 - Paralelepípedo\n");
        printf("6 - Cilindro\n");
        printf("7 - Cone\n");
        printf("8 - Esfera\n");
        printf("9 - Finalizar\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 9) {
            fprintf(arquivo, "fim\n");
            break;
        }

        switch (opcao) {
            case 1: {
                float lado;
                printf("Digite o lado do quadrado: ");
                scanf("%f", &lado);
                fprintf(arquivo, "quadrado %.2f\n", lado);
                break;
            }
            case 2: {
                float base, altura;
                printf("Digite a base e a altura do retângulo: ");
                scanf("%f %f", &base, &altura);
                fprintf(arquivo, "retangulo %.2f %.2f\n", base, altura);
                break;
            }
            case 3: {
                float base, altura;
                printf("Digite a base e a altura do triângulo: ");
                scanf("%f %f", &base, &altura);
                fprintf(arquivo, "triangulo %.2f %.2f\n", base, altura);
                break;
            }
            case 4: {
                float lado;
                printf("Digite o lado do cubo: ");
                scanf("%f", &lado);
                fprintf(arquivo, "cubo %.2f\n", lado);
                break;
            }
            case 5: {
                float c, l, a;
                printf("Digite comprimento, largura e altura do paralelepípedo: ");
                scanf("%f %f %f", &c, &l, &a);
                fprintf(arquivo, "paralelepipedo %.2f %.2f %.2f\n", c, l, a);
                break;
            }
            case 6: {
                float r, h;
                printf("Digite o raio e a altura do cilindro: ");
                scanf("%f %f", &r, &h);
                fprintf(arquivo, "cilindro %.2f %.2f\n", r, h);
                break;
            }
            case 7: {
                float r, h;
                printf("Digite o raio e a altura do cone: ");
                scanf("%f %f", &r, &h);
                fprintf(arquivo, "cone %.2f %.2f\n", r, h);
                break;
            }
            case 8: {
                float r;
                printf("Digite o raio da esfera: ");
                scanf("%f", &r);
                fprintf(arquivo, "esfera %.2f\n", r);
                break;
            }
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    fclose(arquivo);
    printf("\nCena gráfica salva em 'cenagrafica.txt'.\n");
    return 0;
}
