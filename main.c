#include <stdio.h>

int main(void) {
    printf("Bienvenue");
    int a, b, s;

    printf("Entrez le premier entier : ");
    scanf("%d", &a);
    printf("Entrez le deuxième entier : ");
    scanf("%d", &b);
    s = a + b;
    printf("La somme de %d et %d est : %d\n", a, b, s);
    return 0;
}