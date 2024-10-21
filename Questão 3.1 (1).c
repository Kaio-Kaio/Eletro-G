#include<stdio.h>
#include<math.h>

int main() {

float folhas;
float preco;
float total;

printf("Quantas folhas foram impressas? ");
scanf("%f", &folhas);

if (folhas > 100) {
    preco = 0.20;
    total = folhas * preco;
}

if (folhas < 100) {
    preco = 0.25;
    total = folhas * preco;
}

printf("%.2f\n", total);

}