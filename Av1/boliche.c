#include <stdio.h>

int main()
{
    int diametro;
    int altura, largura, profundidade;
    
    scanf("%i", &diametro);
    scanf("%i", &altura);
    scanf("%i", &largura);
    scanf("%i", &profundidade);
    
    if((1 <= diametro && diametro <= 10.000) && (1 <= altura && altura <= 10.000) && (1 <= largura && largura <= 10.000) && (1 <= profundidade && profundidade <= 10.000)){
        printf("S");
    }
    else {
        printf("N");
    }
    
    return 0;
}
