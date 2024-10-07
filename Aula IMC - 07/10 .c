#include <stdio.h>
#include <stdlib.h>

int main(){

    float peso;
    float altura;
    float IMC;
     
     printf("informe seu peso: ");
     scanf("%f", &peso);
     printf("informe sua altura: ");
     scanf("%f", &altura);
    

    IMC = peso/(altura*altura);

    printf("%f", IMC);
}
