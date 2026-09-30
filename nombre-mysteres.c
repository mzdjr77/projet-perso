#include <stdio.h>
#include <stdlib.h>

int main (void){
    int nombre_mystere ;
    int nombre_joueur ;
    int tentative = 0 ; 

nombre_mystere = rand() % 100 + 1 ;

printf("======== NOMBRE MYSTERE ======== \n");
printf("Choisis un nombre entre 1 et 100 \n");
printf("Tu aures 7 tentatives maximum \n");



while (tentative < 7) {

    printf("Tentative %d sur 7 : ", tentative + 1);
scanf("%d", &nombre_joueur);

    tentative = tentative + 1;

    if (nombre_joueur < nombre_mystere) {
        printf("C'est plus grand !\n");
    }
    else if (nombre_joueur > nombre_mystere) {
        printf("C'est plus petit !\n");
    }
    else {
        printf("Bravo, tu as trouve !\n");
        break;
    }
}
if (tentative == 7 && nombre_joueur != nombre_mystere) {
    printf("Perdu !\n");
    printf("Le nombre mystere etait %d\n", nombre_mystere);
}

return EXIT_SUCCESS ;
    }