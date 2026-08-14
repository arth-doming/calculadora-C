#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int adicionar() {
    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);

    int b;
    printf("Digite um numero: ");
    scanf("%d", &b);
    return a + b;
}

int subtrair() {
    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);

    int b;
    printf("Digite um numero: ");
    scanf("%d", &b);
    return a - b;
}

int multiplicar() {
    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);

    int b;
    printf("Digite um numero: ");
    scanf("%d", &b);
    return a * b;
}

int divisao() {
    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);

    int b;
    printf("Digite um numero: ");
    scanf("%d", &b);

    if (b == 0 || a == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 0;
	}
    return a / b;
}

double raiz_quadrada() {
    double a;
    printf("Digite um numero: ");
    scanf("%lf", &a);

    if(a < 0) {
        printf("Erro: Raiz quadrada de número negativo não é permitida.\n");
        return 0;
	}
    return sqrt(a);
}

double potencia() {
    double a;
    printf("Digite um numero: ");
    scanf("%lf", &a);
    double b;
    printf("Digite a potencia: ");
    scanf("%lf", &b);
    return pow(a, b);
}

int main() {
    int opcao;
    for (opcao = -1; opcao != 0;) {
		printf("\n");
        printf(" Calculadora\n");
        printf("=============\n");
        printf("1- Adição\n");
        printf("2- Subtração\n");
        printf("3- Multiplicação\n");
        printf("4- Divisão\n");
        printf("5- Raiz quadrada\n");
        printf("6- Potência\n");
        printf("0- Sair\n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("opcao: %d\n", opcao);
                int resultado = adicionar();
                printf("a soma é %d\n", resultado);
                break;

            case 2:
                printf("opcao: %d\n", opcao);
				int resultado2 = subtrair();
                printf("a subtração é %d\n", resultado2);
                break;

            case 3:
                printf("opcao: %d\n", opcao);
				int resultado3 = multiplicar();
				printf("a multiplicação é %d\n", resultado3);
                break;

            case 4:
                printf("opcao: %d\n", opcao);
				int resultado4 = divisao();
				printf("a divisão é %d\n", resultado4);
                break;

            case 5:
                printf("opcao: %d\n", opcao);
				double resultado5 = raiz_quadrada();
				printf("a raiz quadrada é %lf\n", resultado5);
                break;

            case 6:
                printf("opcao: %d\n", opcao);
				double resultado6 = potencia();
				printf("a potencia é %lf\n", resultado6);
                break;

            case 0:
                printf("opcao: %d\n", opcao);
                break;
            default:
                printf("opcao invalida\n");
		}
    }

    printf("\nFim do programa");


    return 0;
}