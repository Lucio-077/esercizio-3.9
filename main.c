#include <stdio.h>

int main(void) {
    float peso, distanza, urgenza, spese;

    printf("Inserire peso: ");
    scanf("%f", &peso);
    printf("Inserire distanza: ");
    scanf("%f", &distanza);
    printf("Inserire urgenza (1 urgente, 0 non urgente): ");
    scanf("%f", &urgenza);
    if (distanza < 100) {
        if (urgenza == 1) {
            spese = 2.5 * peso;
        } else {
            spese = 1 * peso;
        }
    } else if (distanza >= 100 && distanza <= 300) {
        if (urgenza == 1) {
            spese = 3.5 * peso;
        } else {
            spese = 2 * peso;
        }
    } else if (distanza > 300) {
        if (urgenza == 1) {
            spese = 4 * peso;
        } else {
            spese = 3 * peso;
        }
    }
    printf("Spese: %.2f\n", spese);
}
