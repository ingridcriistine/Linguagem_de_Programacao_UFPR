#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];
    int i = 0;
    int diferente = 0;
    
    scanf("%s", str1);
    scanf("%s", str2);
    
    while(str1[i] != '\0' || str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            diferente = 1;
            break;    
        }
        
        i++;
    }
    
    if(diferente || str1[i] != '\0' && str2[i] != '\0') {
        printf("É diferente");
    }
    else {
        printf("Igual");
    }
    
    return 0;
}
