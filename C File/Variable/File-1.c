#include<stdio.h>

int main() {
    int a = 10;
    float b = 2.5;
    char c = 'A';
    char s[] = "Apple";  // Use char array for strings in C

    printf("Integer type value = %d", a);
    printf("\nFloat type value = %.2f", b);
    printf("\nCharacter = %c", c);
    printf("\nString = %s", s);

    return 0;
}
