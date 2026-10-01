#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int attaque_rate_joueur, attaque_rate_gobelin;
    int attaque1_joueur, attaque1_gobelin;
    int attaque2_joueur, attaque2_gobelin;
    int choix;
    int choix_gobelin;

    int pv_joueur = 100;
    int pv_gobelin = 100;
    int tour = 1;

    printf("========== JEU DE COMBAT ==========\n\n");

    printf("Joueur\n");
    printf("PV : %d\n\n", pv_joueur);

    printf("Gobelin\n");
    printf("PV : %d\n\n", pv_gobelin);


    /* Le combat continue tant que les deux sont vivants */
    while (pv_joueur > 0 && pv_gobelin > 0) {

        printf("\n========== TOUR %d ==========\n", tour);

        /* ==================== JOUEUR ==================== */

        printf("\n--- JOUEUR ---\n");
        printf("1 - Attaque normale\n");
        printf("2 - Attaque puissante\n");
        printf("3 - Se soigner\n");

        printf("\nVotre choix : ");
        scanf("%d", &choix);

        /* Attaque normale */
        if (choix == 1) {

            attaque1_joueur = rand() % 11 + 10;

            printf("\nVous attaquez le Gobelin !\n");
            printf("Vous infligez %d degats.\n", attaque1_joueur);

            pv_gobelin = pv_gobelin - attaque1_joueur;

            if (pv_gobelin < 0) {
                pv_gobelin = 0;
            }
        }

        /* Attaque puissante */
        else if (choix == 2) {

            attaque_rate_joueur = rand() % 3 + 1;

            if (attaque_rate_joueur == 1) {
                printf("\nVotre attaque puissante est ratee !\n");
            }
            else {
                attaque2_joueur = rand() % 16 + 20;

                printf("\nAttaque puissante reussie !\n");
                printf("Vous infligez %d degats.\n", attaque2_joueur);

                pv_gobelin = pv_gobelin - attaque2_joueur;

                if (pv_gobelin < 0) {
                    pv_gobelin = 0;
                }
            }
        }

        /* Soin */
        else if (choix == 3) {

            pv_joueur = pv_joueur + 15;

            if (pv_joueur > 100) {
                pv_joueur = 100;
            }

            printf("\nVous vous soignez.\n");
            printf("Vos PV sont maintenant de %d.\n", pv_joueur);
        }

        /* Mauvais choix */
        else {
            printf("\nChoix invalide !\n");
        }


        /* ==================== GOBELIN ==================== */

        /* Le Gobelin joue seulement s'il est encore vivant */
        if (pv_gobelin > 0) {

            choix_gobelin = rand() % 3 + 1;

            printf("\n--- GOBELIN ---\n");

            /* Attaque normale */
            if (choix_gobelin == 1) {

                attaque1_gobelin = rand() % 11 + 10;

                printf("Le Gobelin fait une attaque normale !\n");
                printf("Tu perds %d PV.\n", attaque1_gobelin);

                pv_joueur = pv_joueur - attaque1_gobelin;

                if (pv_joueur < 0) {
                    pv_joueur = 0;
                }
            }

            /* Attaque puissante */
            else if (choix_gobelin == 2) {

                attaque_rate_gobelin = rand() % 3 + 1;

                if (attaque_rate_gobelin == 1) {
                    printf("L'attaque puissante du Gobelin est ratee !\n");
                }
                else {
                    attaque2_gobelin = rand() % 16 + 20;

                    printf("Le Gobelin reussit son attaque puissante !\n");
                    printf("Tu perds %d PV.\n", attaque2_gobelin);

                    pv_joueur = pv_joueur - attaque2_gobelin;

                    if (pv_joueur < 0) {
                        pv_joueur = 0;
                    }
                }
            }

            /* Soin */
            else if (choix_gobelin == 3) {

                pv_gobelin = pv_gobelin + 15;

                if (pv_gobelin > 100) {
                    pv_gobelin = 100;
                }

                printf("Le Gobelin se soigne !\n");
            }
        }


        /* ==================== PV ==================== */

        printf("\n-----------------------------\n");
        printf("Tes PV       : %d\n", pv_joueur);
        printf("PV du Gobelin: %d\n", pv_gobelin);
        printf("-----------------------------\n");

        tour = tour + 1;
    }


    /* ==================== FIN DU COMBAT ==================== */

    printf("\n========== FIN DU COMBAT ==========\n");

    if (pv_gobelin <= 0) {
        printf("Bravo, tu as gagne !\n");
    }
    else if (pv_joueur <= 0) {
        printf("Dommage, le Gobelin a gagne !\n");
    }

    return EXIT_SUCCESS;
}