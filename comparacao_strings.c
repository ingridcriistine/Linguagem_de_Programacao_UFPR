#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];
    
    scanf("%s", &str1);
    scanf("%s", &str2);
    
    if(str1 == str2) {
        printf("0");
    }
    else if(str1 < str2) {
        printf("-1");
    }
    else {
        printf("1");
    }
    
    return 0;
}
