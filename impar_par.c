//Faça um programa que leia um número e apresente o número lido e a seguir se ele é "par" ou "impar" (sem acento).

//Ex:
//input 1
//saída 1 impar

#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if(numero%2 == 0) {
        printf("%d par", numero);
    }
    else {
        printf("%d impar", numero);
    }
}
