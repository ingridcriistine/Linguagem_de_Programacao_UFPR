//Elabore um programa que calcule as raízes de uma função de 
//2º grau, utilizando ao menos uma função além da main()

#include <stdio.h>
#include <math.h>

int bhaskara(int a, int b, int c) {
    int delta = (b*b) - (4 * a * c);
    int x1 = (-b + sqrt(delta)) / (2 * a);
    int x2 = (-b - sqrt(delta)) / (2 * a);
    
    if(delta < 0) {
        printf("A função não possui raízes");
    }
    
    else {
        if(x1 == x2) {
            printf("A função só tem uma raiz em %i", x1);
        }
        
        else {
            printf("As raízes desta função são %i e %i", x1, x2);
        }
    }
}

int main()
{
    int a;
    int b;
    int c;
    
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    
    bhaskara(a, b, c);

    return 0;
}
