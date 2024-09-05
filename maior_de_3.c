//Faça um programa que leia três valores inteiros (a,b,c) e apresente o maior número lido.
//Exemplo de leitura
//5
//-1
//10

//Exemplo de saída
//10

#include <stdio.h>

int main(void) {
    
    int a, b, c, maior;
    
    printf("Primeiro valor: ");
    scanf("%d", &a);
    printf("Segundo valor: ");
    scanf("%d", &b);
    printf("Terceiro valor: ");
    scanf("%d", &c);
    
    maior = a;
    if(b > maior) {
        maior = b;
    }
    if(c > maior) {
        maior = c;
    }
    printf("%i", maior);
    return 0;
}
