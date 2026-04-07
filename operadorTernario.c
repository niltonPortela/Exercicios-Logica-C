#include <stdio.h>

int main() {
float n1, n2, n3, n4, media;

printf("Digite as 4 notas:\n");
scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

media = (n1 + n2 + n3 + n4) / 4;

printf("Media: %.2f\n", media);

// Operador ternário
printf("Resultado: %s\n", media >= 7 ? "Aprovado" : "Reprovado");

return 0;
}
