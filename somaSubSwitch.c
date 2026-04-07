#include <stdio.h>
int main(){

    int n1,n2,op;

    printf("digite dois numeros:");
    scanf("%d %d", &n1,&n2);

    printf("Escolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    scanf("%d", &op);

switch(op){
    case 1 : 
    printf("Soma:\n");
    printf("%d + %d = %d \n" , n1 , n2 , n1+n2);
    break;

    case 2 :
    printf("Subtracao:\n");
    printf("%d - %d = %d \n" , n1 , n2 , n1-n2);
    break;

    default :
printf("opcao invalida");
}
    return 0;
}