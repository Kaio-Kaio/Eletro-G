#include <stdio.h> 
#include <stdlib.h>

int main(){

    float distancia;
    float combustivel;
    float media; 

    printf("informe a distancia que voce percorreu: ");
    scanf("%f", &distancia);
    printf("informe o combustivel gasto: ");
    scanf("%f", &combustivel);

    media = distancia/combustivel;

    printf("%f", media);

}