//Desenvolva um programa que calcule as raizes uma função quadrática (de segundo grau/Bháskara)
//O programa deve receber os valores de A B e C (onde as letras indicam Ax²+Bx+C) calcular o Delta
// as raízes X1 e X2 e reagir de acordo com o resultado:
//Caso o Delta seja negativo, retorne a mensagem "A função não toca o eixo, então não tem raízes"
//Caso X1 e X2 sejam iguais, retorne a mensagem "A função só tem uma raiz em X1", onde X1 é o valor da variável
//Caso X1 e X2 sejam diferentes, retorne a mensagem "As raízes desta função são X1 e X2", onde X1 e X2 são os
//valores das variáveis
//O programa deve ser montado dentro de uma função "main" do tipo inteiro, e retornar 0 após a impressão 
//dos valores e devem ser importadas (#include) as bibliotecas stdio.h (para uso da função printf)
//e math.h (para uso da função sqrt)

#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    
    int delta = (b*b) - (4 * a * c);
    int x1 = (-b + sqrt(delta)) / (2 * a);
    int x2 = (-b - sqrt(delta)) / (2 * a);
    
    if(delta < 0) {
        printf("A função não toca o eixo, então não tem raízes");
    }
    
    else {
        if(x1 == x2) {
            printf("A função só tem uma raiz em %i", x1);
        }
        
        else {
            printf("As raízes desta função são %i e %i", x1, x2);
        }
    }

    return 0;
}
