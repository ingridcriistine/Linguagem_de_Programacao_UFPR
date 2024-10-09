//Leia dois valores inteiros, no caso para variáveis A e B. A seguir, 
//calcule a soma entre elas e atribua à variável SOMA. A seguir escrever 
//o valor desta variável.

//Entrada
//O arquivo de entrada contém 2 valores inteiros.

//Saída
//Imprima a mensagem "SOMA" com todas as letras maiúsculas, com um espaço 
//em branco antes e depois da igualdade seguido pelo valor correspondente 
//à soma de A e B.

#include <stdio.h>

int main()
{
    int A;
    int B;
    
    scanf("%i", &A);
    scanf("%i", &B);
    
    int SOMA = A + B;
    
    printf("SOMA = %i", SOMA);

    return 0;
}
