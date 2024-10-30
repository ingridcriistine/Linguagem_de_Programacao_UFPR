#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    float preco;
} Produto;

int notaFiscal(Produto produtos[]) {
    
    float valorTotal = 0;
    
    printf("-------------NOTA FISCAL-------------");
    
    for(int i = 0; i < 5; i++) {

        printf("\n%i | %s          R$ %.2f", produtos[i].id, produtos[i].nome, produtos[i].preco);
        valorTotal += produtos[i].preco;
    }
    
    printf("\nValor total: %.2f", valorTotal);
    
}

int main()
{
    Produto produtos[5];
    
    for(int i = 0; i < 5; i++) {
        printf("\nNome do produto: ");
        scanf("%s", produtos[i].nome);
        
        printf("\nPreço: ");
        scanf("%f", &produtos[i].preco);
        
        produtos[i].id = i+1;
    }
    
    notaFiscal(produtos);

    return 0;
}
