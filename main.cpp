#include <stdio.h>

int main() {
    int vetor[100];
    int tamanho = 0;
    int opcao;

    // Insira os elementos no vetor
    printf("Quantos valores deseja inserir (max 100)? ");
    scanf("%d", &tamanho);
    if (tamanho < 0) tamanho = 0;
    if (tamanho > 100) tamanho = 100;

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Menu de funções
    do {
        printf("\n--- MENU ---\n");
        printf("1. Contar ocorrencias de um valor\n");
        printf("2. Contar ocorrencias em um intervalo\n");
        printf("3. Buscar primeira ocorrencia\n");
        printf("4. Excluir primeira ocorrencia\n");
        printf("5. Inserir valor em uma posicao\n");
        printf("6. Remover valores repetidos\n");
        printf("7. Mostrar vetor\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            int valor, cont = 0;
            printf("Digite o valor: ");
            scanf("%d", &valor);

            for (int i = 0; i < tamanho; i++) {
                if (vetor[i] == valor) cont++;
            }
            printf("O valor %d aparece %d vezes.\n", valor, cont);
        }

        else if (opcao == 2) {
            int inicio, fim, cont = 0;
            printf("Digite o valor inicial do intervalo: ");
            scanf("%d", &inicio);
            printf("Digite o valor final do intervalo: ");
            scanf("%d", &fim);

            for (int i = 0; i < tamanho; i++) {
                if (vetor[i] >= inicio && vetor[i] <= fim) cont++;
            }
            printf("Existem %d valores no intervalo [%d, %d].\n", cont, inicio, fim);
        }

        else if (opcao == 3) {
            int valor, pos = -1;
            printf("Digite o valor a buscar: ");
            scanf("%d", &valor);

            for (int i = 0; i < tamanho; i++) {
                if (vetor[i] == valor) {
                    pos = i;
                    break;
                }
            }

            if (pos != -1)
                printf("Primeira ocorrencia do valor %d na posicao %d.\n", valor, pos);
            else
                printf("Valor nao encontrado.\n");
        }

        else if (opcao == 4) {
            int valor, encontrado = 0;
            printf("Digite o valor a excluir: ");
            scanf("%d", &valor);

            for (int i = 0; i < tamanho; i++) {
                if (vetor[i] == valor) {
                    
                    for (int j = i; j < tamanho - 1; j++) {
                        vetor[j] = vetor[j + 1];
                    }
                    tamanho--;
                    encontrado = 1;
                    break;
                }
            }

            if (encontrado)
                printf("Valor excluido com sucesso.\n");
            else
                printf("Valor nao encontrado.\n");
        }

        else if (opcao == 5) {
            if (tamanho >= 100) {
                printf("Vetor cheio. Nao e possivel inserir.\n");
                continue;
            }

            int valor, pos;
            printf("Digite o valor a inserir: ");
            scanf("%d", &valor);
            printf("Digite a posicao (0 a %d): ", tamanho);
            scanf("%d", &pos);

            if (pos < 0 || pos > tamanho) {
                printf("Posicao invalida.\n");
                continue;
            }

            
            for (int i = tamanho; i > pos; i--) {
                vetor[i] = vetor[i - 1];
            }

            vetor[pos] = valor;
            tamanho++;
            printf("Valor inserido com sucesso.\n");
        }

        else if (opcao == 6) {
            for (int i = 0; i < tamanho; i++) {
                for (int j = i + 1; j < tamanho; ) {
                    if (vetor[i] == vetor[j]) {
                        
                        for (int k = j; k < tamanho - 1; k++) {
                            vetor[k] = vetor[k + 1];
                        }
                        tamanho--; 
                    } else {
                        j++; 
                    }
                }
            }
            printf("Valores repetidos removidos.\n");
        }

        else if (opcao == 7) {
            printf("Vetor: ");
            for (int i = 0; i < tamanho; i++) {
                printf("%d ", vetor[i]);
            }
            printf("\n");
        }

        else if (opcao != 0) {
            printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("Programa encerrado.\n");
    return 0;
}

