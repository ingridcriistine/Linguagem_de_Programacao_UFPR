// Faça um programa em C que leia nessa ordem:
// a) um valor inteiro e apresente-o (scanf com %d).
// b) uma tecla e apresente o código ASCII, um espaço e o símbolo correspondente (use as funções para ler teclas - getch/getchar)
// c) um ponto flutuante (scanf %f) e apresente com %.2f - veja o ponto antes do 2f)
// d) leia um texto (char texto[100]) usando a função gets(texto) e apresente-o com printf usando o %s.

// Após cada saída deverá conter uma quebra de linha (\n) e não deverá ter mais nenhuma outra informação, seja para orientar a entrada ou a saída.

#include <stdio.h>

int main(void) {
    int inteiro;
    scanf("%d", &inteiro);
    printf("%d\n", inteiro);
    
    // char tecla;
    // tecla = getchar();
    // printf("%c\n", tecla);
    
    float pontoFlutuante;
    scanf("%f", &pontoFlutuante);
    printf("%.2f\n", pontoFlutuante);
    
    // char texto[100];
    // gets(texto);
    // printf("%s\n", texto);
    
    return 0;
}
