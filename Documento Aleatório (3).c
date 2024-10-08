#include <stdio.h>
#include <stdlib.h>

int main(){

    float comprimento;
    float largura;
    float valor;
    float resultado;

    printf("informe o comprimento da sala: ");
    scanf("%f", &comprimento);
    printf("informe a largura da sala: ");
    scanf("%f", &largura);
    printf("informe o valor do metro quadrado de carpete: ");
    scanf("%f", &valor);

    resultado = comprimento*largura*valor;

    printf("%f", resultado);
}