#include<stdio.h>
#include<stdlib.h>

int main (){

char situacaocivil;


printf("letra: ");
scanf("%c", &situacaocivil);

    if(situacaocivil == 's'){
        printf("Solteiro(a)");
    }
        if(situacaocivil == 'c'){
            printf("Casado(a)");
        }
            if(situacaocivil == 'd'){
                printf("Divorciado(a)");
            }
                if(situacaocivil == 'v'){
                    printf("Viuvo(a)");
                }
}
