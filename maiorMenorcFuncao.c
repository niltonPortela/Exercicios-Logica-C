#include <stdio.h>

int maior(int atual, int maiorAtual){
    return (atual > maiorAtual) ? atual : maiorAtual;
}

int main(){

    int i, n, maiorNum = 0;

    for(i = 1; i <= 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &n);

        if(n == 0){
            printf("Fim de programa\n");
            return 0;
        }

        maiorNum = maior(n, maiorNum);
    }

    printf("Maior numero: %d", maiorNum);

    return 0;
}