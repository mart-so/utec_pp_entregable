#include <stdio.h>

int main() {
    int n;

    printf("Ingresa un numero (0-255): ");
    scanf("%d", &n);

    if (n < 0 || n > 255) {
        printf("Error: el numero debe estar entre 0 y 255.\n");
        return 1;
    }

    // Binario (8 bits): recorre del bit 7 al 0
    printf("Binario:     ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");

    // Hexadecimal
    printf("Hexadecimal: 0x%02X\n", n);

    // ASCII (solo si está en el rango imprimible)
    if (n >= 32 && n <= 126) {
        printf("ASCII:       '%c'\n", n);
    } else {
        printf("ASCII:       (no imprimible)\n");
    }

    return 0;
}