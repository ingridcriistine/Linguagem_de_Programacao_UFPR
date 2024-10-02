//As normativas da UFPR determinam que um aluno é aprovado quando a nota final dele é maior ou igual a 70,
//e que ele irá para exame final caso a nota seja maior que 70 e menor que quarenta
//Considerando que na disciplina DS987 - Tópicos de Programação VIII um professor utiliza-se da média simples 
//de três provas para definir a nota final, elabore um algoritmo que receba do usuário as três notas separadas 
//por espaços e calcule a nota final, respondendo com "A nota do aluno é X e portanto ele está Y" onde X é a 
//nota em inteiro e Y é um dos tres literais "Aprovado", "Reprovado" ou "de Exame Final"

#include <stdio.h>

int main() {
    
    int provas[3];
    
    for(int i = 0; i < 3; i++) {
        scanf("%i", &provas[i]);
    }
    
    int media = (provas[0] + provas[1] + provas[2]) / 3;
    
    if(media >= 70) {
        printf("A nota do aluno é %i e portanto ele está Aprovado", media);
    }
    
    else if(media < 70 && media > 40) {
        printf("A nota do aluno é %i e portanto ele está de Exame Final", media);
    }
    
    else {
        printf("A nota do aluno é %i e portanto ele está Reprovado", media);
    }
    
    return 0;
}
