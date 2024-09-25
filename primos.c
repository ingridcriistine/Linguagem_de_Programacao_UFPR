//Elabore um programa que, dado um limite N imposto pelo usuário, calcule os números primos até N x 2

#include <stdio.h>

int main() {
    
    int limite = 0;
    int n = 0;
    
    printf("Insira um limite: ");
    scanf("%i", &limite);
    
    for(int i = 0; i <= (limite*2); i++) {
        
        n = 0;
        
        for(int j = 1; j <= i; j++) {
            
            if(i % j == 0) {
                n++;
            }
        }
        
        if(n <= 2) {
            printf("%i, ", i);
        }
    }
}
