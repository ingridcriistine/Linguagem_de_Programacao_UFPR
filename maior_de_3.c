//Faça um programa que leia três valores inteiros (a,b,c) e apresente o maior número lido.
//Exemplo de leitura
//5
//-1
//10

//Exemplo de saída
//10

#include <stdio.h>

int main(void) {
    
    int a = 5, b = -1, c = 10, maior;
    
    maior = a;
    if(b > maior) {
        maior = b;
    }
    if(c > maior) {
        maior = c;
    }
    
    printf("%i", maior);
    
}
