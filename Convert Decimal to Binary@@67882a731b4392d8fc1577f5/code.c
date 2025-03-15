#include <stdio.h>
int main() {
    int num, binary = 0, place = 1;
    
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        binary += (num % 2) * place;
        num /= 2;
        place *= 10;
    }

    printf("Binary: %d\n", binary);
    return 0;
}