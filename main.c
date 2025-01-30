
#include "library.h"
#include "library.c"  

int main() {
    int n;
    double a, b;
    int x, y,z;
    char ca, cb;

    afficher_bonjour(); 

    printf("Entrez un entier de 3 chiffres : ");
    scanf("%d", &n);
    afficher_inverse(n);

   
    printf("Entrez le premier réel : ");
    scanf("%lf", &a);
    printf("Entrez le deuxième réel : ");
    scanf("%lf", &b);
    afficher_produit(a, b);

    printf("Entrez un entier : ");
    scanf("%d", &n);
    verifier_parite(n);

    

    printf("Entrez le premier entier x : ");
    scanf("%d", &x);
    printf("Entrez le deuxième entier y : ");
    scanf("%d", &y);
    comparer(x, y);


    printf("Entrez le premier entier x : ");
    scanf("%d", &x);
    printf("Entrez le deuxième entier y : ");
    scanf("%d", &y);
    printf("Entrez le troisième entier z : ");
    scanf("%d", &z);
    trier_et_afficher(x, y, z);


    printf("Entrez le premier caractère : ");
    scanf("%c", &ca);
    getchar(); 
    printf("Entrez le deuxième caractère : ");
    scanf("%c", &cb);
    printf("Avant permutation : ca = %c, cb = %c\n", ca, cb);
    permuter(&x, &y);
    printf("Après permutation : ca = %c, cb = %c\n", ca, cb);


    printf("Entrez le premier entier : ");
    scanf("%d", &x);
    printf("Entrez le deuxième entier : ");
    scanf("%d", &y);
    int result = somme(x, y);
    printf("La somme de %d et %d est : %d\n", x, y, result);



}


