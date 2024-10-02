//Elabore um programa que receba um vetor contendo as temperaturas dos ultimos 7 dias em Fahrenheit
//e devolva imprimindo as temperaturas em graus Celsius com uma casa decimal
//Fórmula C=(F-32)x(5/9)

#include <stdio.h>

int main() {
    
    float tempF[7] = {55, 71, 42, 60, 84, 92, 30};
    float c = 0;
    
    for(int i = 0; i < 7; i++) {
        c = (tempF[i] - 32) * 5 / 9;
        printf("%.1f ", c);
    }
    
    return 0;
}
