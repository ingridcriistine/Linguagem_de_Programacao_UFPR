#include <stdio.h>

int main()
{
    int n = 0;
    int prev = 1;
    int temp = 0;
    
    for(int i = 0; i < 15; i++) {
        
        printf("%i+%i=%i \n", n, prev, prev+n);
        temp = prev+n;
        prev = n;
        n = temp;
    }

    return 0;
}
