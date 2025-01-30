
#include "library.h"  


void afficher_bonjour(void) {
    printf("Bonjour\n");
}

void afficher_inverse(int nombre) {
    if (nombre < 100 || nombre > 999) {
        printf("Erreur : Le nombre doit être un entier de 3 chiffres.\n");
        return;
    }

    int unite = nombre % 10;         
    int dizaine = (nombre / 10) % 10;   
    int centaine = (nombre / 100) % 10; 

    printf("L'inverse de %d est %d%d%d\n", nombre, unite, dizaine, centaine);
}

void afficher_produit(double a, double b) {

    double produit = a * b;
    printf("Le produit de %.3f et %.3f est %.3f\n", a, b, produit);
}

void verifier_parite(int n) {
    if (n % 2 == 0) {
        printf("L'entier %d est pair.\n", n);
    } else {
        printf("L'entier %d est impair.\n", n);
    }
}

void comparer(int x, int y) {
    if (x == y) {
        printf("x = y\n");
    } else if (x > y) {
        printf("x > y\n");
    } else {
        printf("x < b\n");
    }
}

void croissant(int x, int y, int z) {
    int temp;

   
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    if (x > z) {
        temp = x;
        x = z;
        z = temp;
    }
    if (y > z) {
        temp = y;
        y = z;
        z = temp;
    }
    printf("Les entiers dans l'ordre croissant : %d, %d, %d\n", x, y, z);
}

void permuter(char *ca, char *cb) {
    char temp;

    temp = *ca;  
    *ca = *cb;    
    *cb = temp;  
}

int somme(int a, int b) {
    return a + b;
}