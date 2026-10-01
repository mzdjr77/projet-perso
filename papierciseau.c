#include <stdlib.h>
#include <stdio.h>

int main(void) {

    int pierre = 1;
    int feuille = 2;
    int ciseaux = 3;

    int choixuser;
    int choix_ordinateur;

    int score_user = 0;
    int score_ordinateur = 0;
    int manche;


    printf("====== PIERRE FEUILLE CISEAUX ======\n");
    printf("1 - Pierre\n");
    printf("2 - Feuille\n");
    printf("3 - Ciseaux\n");


    for (manche = 1; manche <= 5; manche++) {

        printf("\n======== MANCHE %d / 5 ========\n", manche);

        // Choix de l'ordinateur
        choix_ordinateur = rand() % 3 + 1;

        // Choix de l'utilisateur
        printf("Ton choix (1, 2 ou 3) : ");
        scanf("%d", &choixuser);


        // Verification du choix
        if (choixuser < pierre || choixuser > ciseaux) {
            printf("Votre choix est impossible.\n");
            return EXIT_FAILURE;
        }


        // Affichage du choix de l'utilisateur
        if (choixuser == pierre) {
            printf("Ton choix : Pierre\n");
        }
        else if (choixuser == feuille) {
            printf("Ton choix : Feuille\n");
        }
        else {
            printf("Ton choix : Ciseaux\n");
        }


        // Affichage du choix de l'ordinateur
        if (choix_ordinateur == pierre) {
            printf("Choix ordinateur : Pierre\n");
        }
        else if (choix_ordinateur == feuille) {
            printf("Choix ordinateur : Feuille\n");
        }
        else {
            printf("Choix ordinateur : Ciseaux\n");
        }


        // Recherche du gagnant
        if (choixuser == choix_ordinateur) {
            printf("Egalite !\n");
        }

        else if (choix_ordinateur == pierre && choixuser == ciseaux) {
            printf("L'ordinateur a gagne !\n");
            score_ordinateur++;
        }

        else if (choix_ordinateur == feuille && choixuser == pierre) {
            printf("L'ordinateur a gagne !\n");
            score_ordinateur++;
        }

        else if (choix_ordinateur == ciseaux && choixuser == feuille) {
            printf("L'ordinateur a gagne !\n");
            score_ordinateur++;
        }

        else {
            printf("L'utilisateur a gagne !\n");
            score_user++;
        }


        // Score apres chaque manche
        printf("\nScore ordinateur : %d\n", score_ordinateur);
        printf("Score utilisateur : %d\n", score_user);
    }


    // Score final
    printf("\n======== SCORE FINAL ========\n");
    printf("Ordinateur : %d\n", score_ordinateur);
    printf("Utilisateur : %d\n", score_user);


    // Gagnant final
    if (score_ordinateur > score_user) {
        printf("L'ordinateur gagne la partie !\n");
    }
    else if (score_ordinateur < score_user) {
        printf("L'utilisateur gagne la partie !\n");
    }
    else {
        printf("Il y a egalite !\n");
    }


    return EXIT_SUCCESS;
}