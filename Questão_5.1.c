#include<stdio.h>
#include<math.h>
int main() {

int a;
int c;
float s;
float n;
float m;

printf("Total de alunos? ");
scanf("%d",&a);

 for(c=1; c<=a; c++){

 printf("%da. Nota? ", c);
scanf("%f",&n);
s = s + n;
 }

m = s/a;

printf("Media = %.0f\n", m);
return 0;
}