#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a; // p stocke l'adresse de a

    // Affiche l'adresse contenue dans le pointeur p
    printf("Adresse stockee dans p : %p\n", (void *)p);
    // Affiche l'adresse de la variable a
    printf("Adresse de la variable a : %p\n", (void *)&a);

    return 0;
}

